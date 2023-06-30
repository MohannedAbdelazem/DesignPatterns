#ifndef __sort_h__
#define __sort_h__
#include "sortingFamily.h"
class sort{
    private:
    SortBehavior *srt;
    public:
    sort(SortBehavior* sortAlgorithm);
    virtual void sortFunction(int arr[], int length);
};

#endif