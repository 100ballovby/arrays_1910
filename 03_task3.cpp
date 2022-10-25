#include <iostream>
using namespace std;

void task3_5() {
    int n;
    cout << "Введите размер: ";
    cin >> n;
    int ** matrix = new int *[n];
    for (int i = 0; i < n; i++) {
        matrix[i] = new int[n];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Введите (" << i << ":" << j << ")-й элемент матрицы: ";
            cin >> matrix[i][j];
        }
    }
    cout << endl;
    for (int j = 0; j < n; j++){
        for (int i = n - 1; i >= 0; i--)
            cout << matrix[i][j] << " ";
        cout << endl;
    }

    // очистить память
    for (int i = 0; i < n; i++){
        delete [] matrix[i];
    }
    delete [] matrix;
}