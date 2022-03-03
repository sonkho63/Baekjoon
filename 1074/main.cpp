#include <iostream>
using namespace std;

int main() {
	int N, r, c;
	int d;
	int result = 0;

	cin >> N >> r >> c;

	for (int i = 0; i < N; ++i) {
		d = 1 << (N - i - 1);
		
		if (r / d == 1) {
			++result;
		}
		result <<= 1;
		if (c / d == 1) {
			++result;
		}
		result <<= 1;

		r %= d;
		c %= d;
	}

	result >>= 1;

	cout << result;
}
