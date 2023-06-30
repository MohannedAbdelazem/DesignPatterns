#ifndef __sortingFamily__
#define __sortingFamily__
#include "SortBehavior.h"

class selectionSort: public SortBehavior{
    public:
    void sort(int arr[], int length);
};

class insertionSort: public SortBehavior{
    public:
    void sort(int arr[], int length);
};

#endif