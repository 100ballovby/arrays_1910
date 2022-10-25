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