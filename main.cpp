#include <iostream>

using namespace std;


int main() {
    int n = 3;       // размер матрицы
    int locMin = 0;   // количество локальных минимумов заданной матрицы
    int sum = 0;      // сумма модулей элементов, расположенных выше главной диагонали
    int **matrix = new int *[n];
    for (int i = 0; i < n; i++) {
        matrix[i] = new int[n];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "(" << i << ":" << j << ")-й элемент матрицы: ";
            cin >> matrix[i][j];
        }
    }
    cout << endl;

// Подсчет количества локальных минимумов
    cout << "Расположение локальных минимумов [строка, столбец]:" << endl;
    for (int i = 1; i < n - 1; i++) {
        for (int j = 1; j < n - 1; j++) {
            if (
                    (matrix[i, j] < matrix[i, j - 1]) &&
                    (matrix[i, j] < matrix[i - 1, j]) &&
                    (matrix[i, j] < matrix[i, j + 1]) &&
                    (matrix[i, j] < matrix[i + 1, j])
                    ) {
                locMin++;
                cout << "[" << i + 1 << "," << j + 1 << "]";
            }
        }
    }
    cout << "\n\nКоличество локальных минимумов: " << locMin;

    return 0;
}