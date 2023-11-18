#ifndef ARRAYVEC
#define ARRAYVEC

#include <vector>
#include <cstdlib>

class ArrayVec {
public:
    ArrayVec();
    void randGenArr(int arr[], int n, int exclusive_range);
    void randGenVec(std::vector<int> &v, int n, int exclusive_range);
    int getSize(const int arr[], int cap);

private:
};

#endif

ArrayVec::ArrayVec() {
    
}

void ArrayVec::randGenArr(int arr[], int n, int exclusive_range) {
    for (int i = 0; i < n; ++i) {
        arr[i] = rand() % exclusive_range;
    }
}

/// @brief 
/// @param v 
/// @param n 
/// @param exclusive_range 
void ArrayVec::randGenVec(vector<int> &v, int n, int exclusive_range) {
    v.clear(); 
    for (int i = 0; i < n; ++i) {
        v.push_back(rand() % exclusive_range);
    }
}

int ArrayVec::getSize(const int arr[], int cap) {
    
    return cap;
}

