#ifndef __USER__
#define __USER__
#include "record.h"
class User: public record{
    public:
    User();
    bool Save(std::string entry[], std::string tableName);
    void beforeSave(std::string entry[]);
};

#endif