#ifndef __BOOK__
#define __BOOK__
#include <iostream>
class Book{
    protected:
    std::string description;
    std::string Image;
    std::string BookName;
    std::string BookLink;
    public:
    Book(std::string BookName,std::string Image, std::string BookLink, std::string description):BookName(BookName), Image(Image), BookLink(BookLink), description(description){}
    std::string getDescription();
    std::string getImage();
    std::string getBookName();
    std::string getBookLink();
    
};

#endif