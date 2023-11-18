#include <iostream>
#include "SearchAnalysis.h"
using namespace std;

* //CSE 2010 Fall 2023
* //Lab #{5}
* //{Samuel Morales} #{008346748}
* //{11/17/23}
*
* //{In this lab, I undertook a comprehensive analysis of search algorithms, focusing on both iterative and binary search methods. The primary objective was to evaluate the efficiency of these algorithms across various input sizes, represented by arrays of different lengths.}
*
* //{The most challenging aspect of the lab was optimizing the code for the binary search analysis. As the array sizes increased exponentially, I encountered performance issues that led to prolonged execution times and, in some cases, program instability. To address this challenge, I carefully reviewed and debugged the binary search implementation, identifying inefficiencies and refining the algorithm to enhance its scalability.}

int main()
{
    const int ITER_NUM_SIZES = 10;
    int arr_n[ITER_NUM_SIZES] = {10, 100, 500, 1000, 5000, 10000, 50000, 100000, 200000, 500000};
    int exclusive_range = 1000;
    int elem = 25;
    vector<double> iter_run;
    SearchAnalysis sa = SearchAnalysis();

    for (int i = 0; i < ITER_NUM_SIZES; i++) {
        SearchAnalysis sa = SearchAnalysis(arr_n[i], exclusive_range);
        double elapsed_time = sa.runTime(true, elem);
        iter_run.push_back(elapsed_time);
    }

    string filename_iterative = "BigO_iterative.csv";
    sa.writeToFile(filename_iterative, iter_run, arr_n);

    const int BIN_NUM_SIZES = 16;
    int arr_n2[BIN_NUM_SIZES] = {10, 100, 500, 1000, 5000, 10000, 50000, 100000,
                                  200000, 500000, 1000000, 2000000, 5000000, 10000000,
                                  100000000, 500000000};
    vector<double> bin_run;

    for (int i = 0; i < BIN_NUM_SIZES; i++) {
        SearchAnalysis sa = SearchAnalysis(arr_n2[i], exclusive_range);
    }


    return 0;
}
