#include <iostream>
using namespace std;

int count_upbits(int a) {
	int result = 0;

	for(int i = 0; i < 32; ++i) {
		if (a & (1 << i)) ++result;
	}

	return result;
}

int main() {
	int N, K;
	int result = 0;
	int i = 0;

	cin >> N >> K;

	while (count_upbits(N) > K) {
		for (i = 0; i < 8; ++i) {
			if (N & (1 << i)) break;
		}
		result += (1 << i);
		N += (1 << i);

	}

	cout << result;
}
