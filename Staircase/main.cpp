//
// Created by 王存俊 on 2019-08-17.
//

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