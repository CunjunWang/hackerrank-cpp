//
// Created by 王存俊 on 2019-08-17.
//

#include <iostream>
#include <vector>

using namespace std;

// Complete the birthdayCakeCandles function below.
int birthdayCakeCandles(vector<int> ar) {
    int count = 0;
    int max = *max_element(ar.begin(), ar.end());
    for (int i : ar) {
        if (i == max) {
            count++;
        }
    }
    return count;
}
