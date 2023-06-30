#include "artistResource.h"

std::string artistResource::image(){
    return artist.getImage();
}
std::string artistResource::title(){
    return artist.getName();
}
std::string artistResource::url(){
    return artist.getBlog();
}
std::string artistResource::snippet(){
    return artist.getBio();
}