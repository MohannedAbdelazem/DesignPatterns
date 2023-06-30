#include "LongView.h"
#include "ShortView.h"
#include "bookResource.h"
#include "artistResource.h"
#include "artist.h"
#include "book.h"

int main(){
    Artist artist("Mohanned", "Hot young boy", "Moha was born in 9/11/2003", "https://www.facebook.com/mohanned.abdelazem.9/");
    Book book("HeadFirst DesignPatterns", "Image of a woman with her head zoomed in", "https://www.amazon.eg/-/en/Head-First-Design-Patterns/dp/0596007124", "This book explains design patterns in a good way");
    bookResource BookResource(book);
    artistResource ArtistResource(artist);
    ShortView shortView(&ArtistResource);
    shortView.show();
    LongView LV(&BookResource);
    std::cout << "\n\n";
    LV.show();
    return 0;
}