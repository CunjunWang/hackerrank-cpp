//
// Created by 王存俊 on 2019-08-17.
//

/*
 * Complete the 'gradingStudents' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts INTEGER_ARRAY grades as parameter.
 */

vector<int> gradingStudents(vector<int> grades) {
    for (int i = 0; i < grades.size(); i++) {
        if (grades[i] >= 38 && grades[i] % 5 >= 3) {
            grades[i] = ((grades[i] / 5) + 1) * 5;
        }
    }
    return grades;
}