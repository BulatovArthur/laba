#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argv[]) {
  vector<int> array;
	int position = -1;
	for (int i = 1; i < argc; i++)
		array.insert(array.end(), atoi(argv[i]));
	for (int i = array.size() - 1; i > -1; i--)
		if (array[i] == 1)
			if (array[i - 1] == 0)
				position = i - 1;
	cout << "i = " << position;
}
