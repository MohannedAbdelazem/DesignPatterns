#include "record.h"

record::record(){
    int checker = sqlite3_open("TemplateDB.db", &Con);
    if(checker){
        fprintf(stderr, "Can't open dataBase\n", sqlite3_errmsg(Con));
        sqlite3_close(Con);
        exit(3);
    }
}
record::~record(){
    sqlite3_close(Con);
}
void record::afterSave(std::string entry[], std::string tableName){
    std::cout << "Entries:";
    for(int i = 0; i<3;i++){
        std::cout << " " << entry[i];
    }
    std::cout << "was added to " << tableName << " successfully" << std::endl;
}
void record::saveDB(std::string entry[], std::string tableName){
    beforeSave(entry);
    if(Save(entry)){
        afterSave(entry, tableName);
    }
    else{
        std::cout << "Data couldn't be saved";
    }
}