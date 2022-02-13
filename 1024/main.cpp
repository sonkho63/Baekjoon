#include <iostream>
using namespace std;

int main() {
	long long N;
	int L;
	long long low, high;
	int i;

	cin >> N >> L;
	
	for (i = L; i < 101; ++i) {
		high = N / i + i / 2;
		low = high - i + 1;

		if (low < 0) break;
		else if (high > N) break;
		else if (2 * N == high * (high + 1) - (low - 1) * low) {
			for (int j = low; j <= high; ++j) {
				cout << j << ' ';
			}
			return 0;
		}
	}

	cout << -1;
}
