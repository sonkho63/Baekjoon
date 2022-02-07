#include <iostream>
using namespace std;

int arr[50][50] = { 0 };

void deleteNode(int i, int j) {
	arr[i][j] = 0;
	if (arr[i + 1][j] == 1 && (i + 1) < 50) deleteNode(i + 1, j);
	if (arr[i - 1][j] == 1 && (i - 1) > -1) deleteNode(i - 1, j);
	if (arr[i][j + 1] == 1 && (j + 1) < 50) deleteNode(i, j + 1);
	if (arr[i][j - 1] == 1 && (j - 1) > -1) deleteNode(i, j - 1);
}

int main() {
	int T;
	int M, N, K;
	int result = 0;

	cin >> T;

	for (int t = 0; t < T; ++t) {
		cin >> M >> N >> K;
		
		for (int i = 0; i < K; ++i) {
			cin >> M >> N;
			arr[N][M] = 1;
		}

		for (int i = 0; i < 50; ++i) {
			for (int j = 0; j < 50; ++j) {
				if (arr[j][i] == 1) {
					deleteNode(j, i);
					++result;
				}
			}
		}

		cout << result << endl;
		
		for (int i = 0; i < 50; ++i) {
			for (int j = 0; j < 50; ++j) {
				arr[i][j] = 0;
				result = 0;
			}
		}
	}
}
