#include "posts.h"
#include <string>
Posts::Posts():record(){
    std::string sql = "create table if not exists Posts\
    (\
        id integer primary key,\
        PostTitle TEXT,\
        PostText TEXT\
    )";
    int result = sqlite3_exec(Con, sql.c_str(), nullptr, nullptr, nullptr);
    if(result != SQLITE_OK){
        std::cout << "Error creating Posts database" << std::endl;
    }
}

void Posts::beforeSave(std::string entry[]){
    if(entry[1] == "voldemort"){
        std::cout << "He whose name shall not be said shall not have a post made about him" << std::endl;
        std::cout << "avada kedavra!!!!" << std::endl;
        exit(3);
    }
}
bool Posts::Save(std::string entry[], std::string tableName){
    std::string sql = "INSERT INTO Posts (id, PostTitle, PostText) \
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