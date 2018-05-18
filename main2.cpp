#include <iostream>

using namespace std;

void pow(int a, int b){  
        int res = 1; 
        if (a == 2) { 
                cout << (a << b-1); 
                return; 
        } 
        for (int i = 0; i < b; i++) 
                res = res * a; 
        cout << res << endl; 
}

int main() {
        cout << "Введите число для возведения в степень: ";
        int a;
        cin >> a;
        cout << "Введите степень: ";
        int b;
        cin >> b;
        pow(a, b);
}

