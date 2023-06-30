#ifndef __Artist__
#define __Artist__
#include <iostream>
class Artist{
    protected:
    std::string name;
    std::string image;
    std::string bio;
    std::string blog;
    public:
    Artist(std::string name, std::string image, std::string bio, std::string blog):name(name), image(image), bio(bio), blog(blog){}
    std::string getName();
    std::string getImage();
    std::string getBio();
    std::string getBlog();
};

#endif