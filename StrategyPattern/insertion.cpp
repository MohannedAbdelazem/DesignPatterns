#include "sortingFamily.h"
#include "SortBehavior.h"
void insertionSort::sort(int arr[], int length){
    for(int i = 1;i<length;i++){
       int key = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}
