#include <iostream>
using namespace std;

void zamena_chisel() {
    int num1, num2, temp;

    cout << "Insert num1: ";
    cin >> num1;
    cout << "Insert num2: ";
    cin >> num2;

    temp = num1;
    num1 = num2;
    num2 = temp;

    cout << num1 << endl;
    cout << num2 << endl;
}

void celsium() {
    int temperature;
    char symbol;

    cout << "Insert temperature: ";
    cin >> temperature;
    cout << "Inser C or F: ";
    cin >> symbol;

    if (symbol == 'F') {
        cout << (temperature * 9/5) + 32 << endl;
    } else if (symbol == 'C') {
        cout << (temperature - 32) * 5/9 << endl;
    } else {
        cout << "Incorrect symbol" << endl;
    }
}

void chess() {
    int x1, y1, x2, y2;

    cout << "x1: ";
    cin >> x1;
    cout << "y1: ";
    cin >> y1;
    cout << "x2: ";
    cin >> x2;
    cout << "y2: ";
    cin >> y2;
    bool greater_8 = x1 <= 8 && y1 <= 8 && x2 <= 8 && y2 <= 8;
    if ((x1 + y1 + x2 + y2) % 2 == 0 && greater_8) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

void GCD() {
    int num1, num2, gcd;
    cout << "num1: ";
    cin >> num1;
    cout << "num2: ";
    cin >> num2;
    gcd = 0;
    for (int i = 1; i <= num1 && i <= num2; i++) {
        if (num1 % i == 0 && num2 % i == 0) {
            gcd = i;
        }
    }
    cout << "GCD is: " << gcd << endl;
}

void factorial() {
    int n, factorial = 1;
    cout << "n: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }
    cout << n << "! = " << factorial;

    return 0;
}

