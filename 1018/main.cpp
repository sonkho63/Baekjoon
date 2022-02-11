#include <iostream>
using namespace std;

int check(char arr[][51], int x, int y) {
	int result_black = 0, result_white = 0;

	for (int i = 0; i < 8; ++i) {
		for (int j = 0; j < 8; ++j) {
			if (((i + j) % 2 == 0) && arr[x + i][y + j] == 'B') {
				++result_white;
			}
			else if (((i + j) % 2 == 1) && arr[x + i][y + j] == 'W') {
				++result_white;
			}
			if (((i + j) % 2 == 0) && arr[x + i][y + j] == 'W') {
				++result_black;
			}
			else if (((i + j) % 2 == 1) && arr[x + i][y + j] == 'B') {
				++result_black;
			}
		}
	}
	return min(result_white, result_black);
}

int main() {
	char arr[50][51] = { 0 };
	int N, M;
	int result = 64;

	cin >> N >> M;
	
	getchar();
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j <= M; ++j) {
			arr[i][j] = getchar();
		}
	}

	for (int i = 0; i <= N - 8; ++i) {
		for (int j = 0; j <= M - 8; ++j) {
			result = min(result, check(arr, i, j));
		}
	}

	cout << result;
}
