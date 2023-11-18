#include "SearchAnalysis.h"
#include <algorithm> 
#include <cstdlib>   
#include <ctime>     


class SearchAnalysis : public ArrayVec {
public:
    
    SearchAnalysis() : ArrayVec() {}

   
    SearchAnalysis(int n, int exclusive_range) : ArrayVec() {
        randGenVec(v, n, exclusive_range);
        std::sort(v.begin(), v.end()); 
    }

   
    int iterativeSearch(int elem) {
        for (int i = 0; i < v.size(); i++) {
            if (v[i] == elem) {
                return i;
            }
        }
        return -1;
    }

    
    int binarySearch(int start, int end, int elem) {
        if (start <= end) {
            int mid = start + (end - start) / 2;

            if (v[mid] == elem) {
                return mid;
            }

            if (v[mid] > elem) {
                return binarySearch(start, mid - 1, elem); 
            } else {
                return binarySearch(mid + 1, end, elem); 
            }
        }

        return -1; 
    }
};

int main() {
    
    SearchAnalysis searchObj(10, 100); 
    int elementToFind = 42; 

    
    int iterativeResult = searchObj.iterativeSearch(elementToFind);
    if (iterativeResult != -1) {
        cout << "Iterative Search: Element found at index " << iterativeResult << endl;
    } else {
        cout << "Iterative Search: Element not found" << endl;
    }

    
    int binaryResult = searchObj.binarySearch(0, searchObj.getSize() - 1, elementToFind);
    if (binaryResult != -1) {
        cout << "Binary Search: Element found at index " << binaryResult << endl;
    } else {
        cout << "Binary Search: Element not found" << endl;
    }

    return 0;
}
