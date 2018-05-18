#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	int a, b, c;
	cin >> a >> b >> c;
	if ((a - b) * (a - c) < 0)
		cout << "median " << a << endl;
	else
		if ((b - c) * (b - a) < 0)
			cout << "median " << b << endl;
		else 
			cout << "median "<< c << endl;
}
