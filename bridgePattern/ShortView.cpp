#include "ShortView.h"

void ShortView::show(){
    std::cout << "Title: " << resource->title() << "\n";
    std::cout << "Snippet: " << resource->snippet() << "\n";
}