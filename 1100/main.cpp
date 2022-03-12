#include <iostream>
using namespace std;

int main() {
	char tmp[9];
	int result = 0;
	
	for (int i = 0; i < 8; ++i) {
		cin >> tmp;
		for (int j = 0; j < 8; ++j) {
			if ((i % 2 == j % 2) && tmp[j] == 'F') {
				++result;
			}
		}
	}

	cout << result;
}
