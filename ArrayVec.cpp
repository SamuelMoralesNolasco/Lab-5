#include "ArrayVec.h"
#include <cstdlib>  
#include <ctime>    

ArrayVec::ArrayVec() {
    srand(time(0));
}

void ArrayVec::randGenArr(int arr[], int n, int exclusive_range) {
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % exclusive_range;
    }
}

void ArrayVec::randGenVec(vector<int> &v, int n, int exclusive_range) {
    for (int i = 0; i < n; i++) {
        v.push_back(rand() % exclusive_range);
    }
}

int ArrayVec::getSize(const int arr[], int cap) {
    int size = 0;
    while (size < cap && arr[size] != -1) {
        size++;
    }
    return size;
}
