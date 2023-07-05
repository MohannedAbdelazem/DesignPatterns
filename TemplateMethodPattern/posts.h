#ifndef __POSTS__
#define __POSTS__

#include "record.h"
class Posts: public record{
    public:
    Posts();
    bool Save(std::string entry[], std::string tableName);
    void beforeSave(std::string entry[]);
};


#endif