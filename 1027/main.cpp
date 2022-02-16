#include <iostream>
using namespace std;

int main() {
	int N, result = 0, count = 0;
	long long height[50] = { 0 };
	double slope;

	cin >> N;
	for (int i = 0; i < N; ++i) {
		cin >> height[i];
	}

	for (int i = 0; i < N; ++i) {
		count = 0;
		for (int j = 0; j < N; ++j) {
			if (i != j) {
				int k;
				slope = (double)(height[i]-height[j]) / (double)(i - j);
				for (k = min(i, j) + 1; k < max(i, j); ++k) {
					if (height[k] >= (height[min(i, j)] + slope * (k - min(i, j)))) {
						break;
					}			
				}
				if (k == max(i, j)) {
					++count;
				}
			}
		}
		if (result < count) {
			result = count;
		}
	}

	cout << result;
}
