#include <iostream>
using namespace std;

int linSearch(int arr[], int requiredKey, int arrSize) {
    // функция принимает как параметры массив, искомое значение и размер массива
    for (int i = 0; i < arrSize; i++) {  // проходимся по каждому элементу массива
        if (arr[i] == requiredKey) {  // сравниваем искомое значение с каждым элементом
            return i;  //  возвращаем индекс
        }
    }
    return -1;  // если не нашли, возвращаем -1
}