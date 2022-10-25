#include <iostream>

using namespace std;


void task2_ex5() {  // ваше задание по варианту
    const int n = 3;
    const int m = 3;
    int matrix[n][m] = {
            {2, 7, 8},
            {1, 9, 5},
            {5, 7, 8},
    };
    int summ = 0, mult = 1;
    for (int i = 0; i < n; i++) {
        summ += matrix[i][i];
        mult *= matrix[i][m - i - 1];
    }
    cout << "Sum: " << summ << endl;
    cout << "Mult: " << mult;
}

void task2_ex2() {  // найти сумму элементов ниже главной диагонали матрицы
    const int n = 3;
    const int m = 3;
    int matrix[n][m] = {
            {2, 7, 8},
            {1, 9, 5},
            {5, 7, 8},
    };

    int positiv_sum = 0;

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < m; j++) {
            if (matrix[i][j] < 0) {
                cout << matrix[i][j] << endl;
                positiv_sum += matrix[i][j];
            }
        }
    }
    cout << positiv_sum << endl;
}


void task2_ex6() {
    const int n = 3;
    const int m = 3;
    int matrix[n][m] = {
            {2, 7, 8},
            {1, 22, 5},
            {10, 7, 8},
    };

    int even_counter = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(matrix[i][j] % 2 == 0) {
                even_counter++;
            }
        }
    }
    for(int i = n; i > 0; i--) {
        for(int j = n; j < 0; j++) {
            if(matrix[i][j] % 2 == 0) {
                even_counter++;
            }
        }
    }
    cout << even_counter << " even numbers.\n";
}
