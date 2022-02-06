#include <iostream>
using namespace std;

int main() {
	int T, N, M;
	int result = 0;
	int count[30][30] = { 0 };

	cin >> T;

	for (int i = 0; i < 30; i++) {
		count[0][i] = i + 1;
		count[i][i] = 1;
	}
	for (int i = 1; i < 30; ++i) {
		for (int j = i + 1; j < 30; ++j) {
			for (int k = i - 1; k < j; ++k) {
				count[i][j] += count[i - 1][k];
			}
		}
	}
	for (int i = 0; i < T; i++) {
		cin >> N >> M;
		cout << count[N - 1][M - 1] << endl;
	}
}
