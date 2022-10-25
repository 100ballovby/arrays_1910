#include <iostream>
using namespace std;

void task3_5() {
    int n;
    cout << "Введите размер: ";
    cin >> n;
    int ** matrix = new int *[n];
    for (int i = 0; i < n; i++) {
        matrix[i] = new int[n];
    }  // создаю матрицу и помещаю в нее n-количество массивов
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Введите (" << i << ":" << j << ")-й элемент матрицы: ";
            cin >> matrix[i][j];
        }
    }
    cout << endl;
    for (int i = 0; i < n; i++){
        for (int j = n - 1; j >= 0; j--)
            cout << matrix[j][i] << " ";
        cout << endl;
    }

    // очистить память
    for (int i = 0; i < n; i++){
        delete [] matrix[i];
    }
    delete [] matrix;
}