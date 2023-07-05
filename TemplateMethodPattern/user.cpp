#include "user.h"
#include <string>
User::User():record(){
    std::string sql = "create table if not exists users\
    (\
        id integer primary key,\
        username TEXT,\
        password TEXT\
    )";
    int result = sqlite3_exec(Con, sql.c_str(), nullptr, nullptr, nullptr);
    if(result != SQLITE_OK){
        std::cout << "Error creating user database" << std::endl;
    }
}

void User::beforeSave(std::string entry[]){
    if(entry[1] == "voldemort"){
        std::cout << "He whose name shall not be said shall not enter" << std::endl;
        std::cout << "avada kedavra!!!!" << std::endl;
        exit(3);
    }
}
bool User::Save(std::string entry[], std::string tableName){
    std::string sql = "INSERT INTO users (id, username, password) \
    VALUES(?, ?, ?)";
    sqlite3_stmt* statement;
    int result = sqlite3_prepare_v2(Con, sql.c_str(), -1, &statement, nullptr);
    if(result != SQLITE_OK){
        std::cout << "Error preparing sql statement" << std::endl;
        return false;
    }
    else{
        sqlite3_bind_int(statement, 1, std::stoi(entry[0]));
        sqlite3_bind_text(statement, 2, entry[1].c_str(), -1, SQLITE_TRANSIENT);
        sqlite3_bind_text(statement, 3, entry[2].c_str(), -1, SQLITE_TRANSIENT);
        sqlite3_step(statement);
        sqlite3_finalize(statement);
    }
    return true;
}