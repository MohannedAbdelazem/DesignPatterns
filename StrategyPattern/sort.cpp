#include "SortBehavior.h"
#include "sort.h"
sort::sort(SortBehavior* sortAlgorithm){
    srt = sortAlgorithm;
}
void sort::sortFunction(int arr[], int length){
    srt->sort(arr, length);
}