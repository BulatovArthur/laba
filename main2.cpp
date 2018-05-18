#include <iostream>

using namespace std;

int main() {
        cout << "Введите число для возведения в степень: ";
        int a;
        cin >> a;
        cout << "Введите степень: ";
        int b;
        cin >> b;
        for (unsigned i = 1; i < b; i++)
                a*=a;
        cout << a << endl;
}

