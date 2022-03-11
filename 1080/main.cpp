#include <iostream>
#include <cstring>
using namespace std;

int main() {
	int N, M, result = 0;
	string src[50];
	string dst[50];

	cin >> N >> M;

	for (int i = 0; i < N; ++i) {
		cin >> src[i];
	}
	for (int i = 0; i < N; ++i) {
		cin >> dst[i];
	}

	for (int i = 0; i < N - 2; ++i) {
		for (int j = 0; j < M - 2; ++j) {
			if (src[i][j] != dst[i][j]) {
				++result;
				for (int r = i; r < i + 3; ++r) {
					for (int c = j; c < j + 3; ++c) {
						if (src[r][c] == '0') src[r][c] = '1';
						else if (src[r][c] == '1') src[r][c] = '0';
					}
				}
			}
		}
	}

	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < M; ++j) {
			if (src[i][j] != dst[i][j]) {
				cout << -1;
				return 0;
			}
		}
	}

	cout << result;
}
