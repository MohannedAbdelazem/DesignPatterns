#ifndef __ReCord__
#define __ReCord__
#include <sqlite3.h>
#include <iostream>
class record{
    public:
    sqlite3 *Con;
    record();
    ~record();
    void saveDB(std::string entry[], std::string tableName);
    virtual void beforeSave(std::string entry[]) = 0;
    virtual bool Save(std::string entry[]) = 0;
    void afterSave(std::string entry[], std::string tableName);
};

#endif