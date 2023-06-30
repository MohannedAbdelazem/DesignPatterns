#include "sortingFamily.h"
#include "sort.h"
#include <iostream>
int main(){
    selectionSort ss;
    int arr[10] = {9, 5, 8, 1, 4, 2, 6, 7, 3, 10};
    int length = 10;
    sort srt(&ss);
    srt.sortFunction(arr, length);
    ss.sort(arr, length);
    for(int i = 0;i < 10;i++){
        std::cout << arr[i] << std::endl;
    }
}