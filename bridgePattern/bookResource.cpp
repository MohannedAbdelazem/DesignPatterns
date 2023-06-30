#include "bookResource.h"

std::string bookResource::snippet(){
    return this->book.getDescription();
}
std::string bookResource::title(){
    return this->book.getBookName();
}
std::string bookResource::image(){
    return this->book.getImage();
}
std::string bookResource::url(){
    return this->book.getBookLink();
}