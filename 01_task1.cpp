#include <iostream>

using namespace std;

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
    for (int i = 0; i < k; i++) {
        cout << arr[k - i - 1] << "|";  // вывожу элементы с последнего по первый
    }
    cout << endl;
    // развернуть массив вариант 2
    for (int i = 0; i < k; i++) {
        int tbd = arr[i];  // сохраняю во временную переменную элемент массива с индексом i
        arr[i] = arr[k - i - 1];  // меняю местами "первый" и "последний" элемент
        arr[k - i - 1] = tbd;  // на место последнего элемента ставлю сохраненный элемент из временной переменной
    }
    for (int i: arr) {
        cout << i << "|";
    }
}

void task1_ex5() {  // ваше упражнение по варианту
    const int k = 10;
    int arr[k];
    cout << "Insert array:" << endl;

    for (int i = 0; i < k; i++) {
        cout << "Insert " << i << ": ";
        cin >> arr[i];
    }

    for (int i = 0; i < k; i++) {  // перебираем все элементы массива
        bool flag = true;  // вводим флаговую переменную
        for (int j = 0; j < k; j++) {
            if (i - j != 0 && arr[i] == arr[j]) {  // если циклы просматривают не одно и то же число И эти числа равны
                flag = false;  // сбросить флаговую переменную
            }
        }
        if (flag) {  // если флаг не сброшен
            cout << arr[i] << " ";  // вывести уникальный элемент
        }
    }
}