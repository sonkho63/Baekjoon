#include <iostream>
using namespace std;

int main() {
	unsigned int fibo[41][2] = { {0,0} };
	fibo[0][0] = 1;
	fibo[1][1] = 1;
	for (int i = 2; i < 41; ++i) {
		fibo[i][0] = fibo[i - 1][0] + fibo[i - 2][0];
		fibo[i][1] = fibo[i - 1][1] + fibo[i - 2][1];
	}
	int T = 0, N = 0;
	cin >> T;
	for (int i = 0; i < T; ++i) {
		cin >> N;
		cout << fibo[N][0] << ' ' << fibo[N][1] << endl;
	}

	return 0;
}
