#include <iostream>
using namespace std;

int main() {
	int N;
	int max = 0, min = 1000000;
	int tmp;

	cin >> N;
	for (int i = 0; i < N; ++i) {
		cin >> tmp;
		if (tmp < min) min = tmp;
		if (tmp > max) max = tmp;
	}
	cout << min * max;
}
