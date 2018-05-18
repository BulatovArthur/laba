#include <iostream>

using namespace std;

void pow(int a, int b){  
	int n = 1;
	for (int i = 0; i < b; i++)
                n *= a;
	cout << "result " << n;
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

