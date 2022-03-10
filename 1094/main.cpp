#include <iostream>
using namespace std;

int main() {
	int length, result = 0;

	cin >> length;

	for (int i = 0; i < 32; ++i) {
		result += (length & 1);
		length >>= 1;
	}

	cout << result;
}
