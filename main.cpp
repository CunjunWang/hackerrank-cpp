#include <iostream>
#include <vector>

using namespace std;

// Complete the staircase function below.
void staircase(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            cout << " ";
        }
        for (int j = 0; j < i + 1; j++) {
            cout << "#";
        }
        cout << "" << endl;
    }
}

int main() {
    staircase(5);
}