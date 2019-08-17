//
// Created by 王存俊 on 2019-08-17.
//

#include <iostream>
#include <vector>

using namespace std;

void plusMinus(vector<int> arr) {
    double posCount = 0;
    double negCount = 0;
    double zeroCount = 0;
    int size = arr.size();
    for (int i : arr) {
        if (i > 0) {
            posCount++;
        } else if (i < 0) {
            negCount++;
        } else {
            zeroCount++;
        }
    }
    std::cout << posCount / size << std::endl;
    std::cout << negCount / size << std::endl;
    std::cout << zeroCount / size << std::endl;
}