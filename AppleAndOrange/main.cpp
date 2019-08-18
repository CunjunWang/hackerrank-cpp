//
// Created by 王存俊 on 2019-08-17.
//

// Complete the countApplesAndOranges function below.
void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) {
    for (int i = 0; i < apples.size(); i++) {
        apples[i] += a;
    }
    for (int i = 0; i < oranges.size(); i++) {
        oranges[i] += b;
    }
    int apple = 0;
    int orange = 0;
    for (int i : apples) {
        if (i >= s && i <= t)
            apple++;
    }
    for (int i : oranges) {
        if (i >= s && i <= t)
            orange++;
    }
    cout << apple << endl;
    cout << orange << endl;
}