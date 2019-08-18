//
// Created by 王存俊 on 2019-08-17.
//

#include <iostream>
#include <vector>

using namespace std;

// Complete the miniMaxSum function below.
void miniMaxSum(vector<int> arr) {
    long long max = 0;
    long long min = LONG_LONG_MAX;
    long long sum = 0;
    for (int i = 0; i < arr.size(); i++) {
        sum += arr[i];
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    cout << sum - max << " " << sum - min;
}