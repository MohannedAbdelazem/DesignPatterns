#ifndef __ArtistResource__
#define __ArtistResource__
#include "Iresource.h"
#include "artist.h"

class artistResource:public Iresource{
    private:
    Artist artist;
    public:
    artistResource(Artist artist):artist(artist){}
    std::string snippet();
    std::string image();
    std::string title();
    std::string url();
};

#endif