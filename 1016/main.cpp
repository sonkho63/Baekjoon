#include <iostream>
using namespace std;

int main() {
	long min = 0, max = 0;
	cin >> min >> max;
	int N = max - min + 1;
	bool* p = NULL;

	p = new bool[N]; // index (min+) 0 ~ (max)
	
	for (int i = 0; i < N; ++i) {
		p[i] = false;
		cout << p[i] << endl;
	}

	for (int num = 2; num < max; ++num) {
		for (int i = 0; i < N; ++i) {
			if (min + i)
		}
	}

	return 0;
}
