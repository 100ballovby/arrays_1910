#include <iostream>
using namespace std;

void arrays_1() {
    int array[5];  // массив из 5 элементов
    array[0] = 3;
    array[1] = 1;
    array[2] = 7;

    cout << array[0] + array[1] + array[2];
}

void fix_array() {
    const int length = 10;
    int array[length];
}

void length_of_array() {
    int array[] = {1, 3, 7, 8, 2, 9, 11, 15};
    cout << sizeof(array) / sizeof(array[0]) << endl;  // определить количество элементов массива
    cout << sizeof(array);
}

void task1_ex1() {
    const int k = 10;
    int arr[k];
    cout << "Insert array:" << endl;

    for (int i = 0; i < k; i++) { // наполнение массива числами
        arr[i] = rand() % 101 - 50;
        cout << arr[i] << "|";
    }
    cout << endl;
    int j = 0;  // сохраняю индекс первого элемента массива
    for (int i = 0; i < k; i++) {  // прохожусь по каждому элементу массива
        if (arr[i] < 0) {  // если элемент, который мы просматриваем отрицательный
            arr[j] = arr[i];  // переставляю этот элемент на место элемента с индексом j
            j++;
        }
    }
    for (int i = 0; i < k; i++) {
        if (arr[i] > 0) {
            arr[j] = arr[i];
            j++;
        }
    }
    cout << "Array: " << endl;
    for (int elem = 0; elem < k; elem++) {
        cout << arr[elem] << "|";
    }
}

void task1_ex2() {
    const int k = 10;
    int arr[k];
    cout << "Insert array:" << endl;

    for (int i = 0; i < k; i++) { // наполнение массива числами
        arr[i] = rand() % 200 - 50;
        cout << arr[i] << "|";
    }
    cout << endl;
    // развернуть массив вариант 1
    for (int i = 0; i < k; i ++) {
        cout << arr[k - i - 1] << "|";  // вывожу элементы с последнего по первый
    }
    cout << endl;
    // развернуть массив вариант 2
    for (int i = 0; i < k; i++) {
        int tbd = arr[i];  // сохраняю во временную переменную элемент массива с индексом i
        arr[i] = arr[k - i - 1];  // меняю местами "первый" и "последний" элемент
        arr[k - i - 1] = tbd;  // на место последнего элемента ставлю сохраненный элемент из временной переменной
    }
    for (int i : arr) {
        cout << i << "|";
    }
}

int main() {
    const int k = 10;
    int arr[k];
    cout << "Insert array:" << endl;

    for (int i = 0; i < k; i++) { // наполнение массива числами
        arr[i] = rand() % 200 - 50;
        cout << arr[i] << "|";
    }
    cout << endl;
    for (int i = 0; i < k; i++) {
        int f = 1;
        for (int j = 0; j < k; j++) {
            if (arr[i] == arr[j] && i != j) {
                f = 0;
                break;
            }
        }
        if (f == 1) {
            cout << arr[i] << "|";
        }
    }
    return 0;
}
