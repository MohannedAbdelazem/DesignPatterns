#ifndef __BookResource__
#define __BookResource__
#include "Iresource.h"
#include "book.h"
class bookResource: public Iresource{
    private:
    Book book;
    public:
    bookResource(Book book):book(book){}
    std::string snippet();
    std::string image();
    std::string title();
    std::string url();

};

#endif