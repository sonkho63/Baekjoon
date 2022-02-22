#include <iostream>
using namespace std;

int main() {
	int arr[50][51];
	int result = 1;

	int N, M;
	cin >> N >> M;
	
	getchar();
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < M + 1; ++j) {
			arr[i][j] = getchar() - 48;
		}
	}

	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < M; ++j) {
			for (int k = 1; (k < (M - j)) && (k < (N - i)); ++k) {
				if (arr[i][j] == arr[i][j + k] && arr[i][j] == arr[i + k][j] && arr[i][j] == arr[i + k][j + k]) {
					result = max(result, (k + 1) * (k + 1));
				}
			}
		}
	}

	cout << result;
}
