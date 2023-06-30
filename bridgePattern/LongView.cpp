#include "LongView.h"

void LongView::show(){
    std::cout << "Title: " << resource->title() << "\n";
    std::cout << "Snippet: " << resource->snippet() << "\n";
    std::cout << "Image: " << resource->image() << "\n";
    std::cout << "URL: " << resource->url() << "\n";
}