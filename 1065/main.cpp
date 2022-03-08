#include <iostream>
#include <cstring>
using namespace std;

int main() {
	int N, result = 0;
	int a, b, c;

	cin >> N;

	if (N == 1000) --N;

	while (N >= 100) {
		a = N / 100;
		b = (N % 100) / 10;
		c = N % 10;

		if (2 * b == a + c) {
			++result;
		}

		--N;
	}
	
	if (N < 100) {
		result += N;
	}
	
	cout << result;
}
