#include <iostream>
using namespace std;

int main() {
	int N, result = 0;
	int arr[50][50];
	char tmp;
	int count = 0;

	cin >> N;
	
	getchar();
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < N; ++j) {
			tmp = getchar();
			if (tmp == 'Y') {
				arr[i][j] = 1;
			}
			else {
				arr[i][j] = 0;
			}
		}
		getchar();
	}

	for (int i = 0; i < N; ++i) {
		int friends[50] = { 0 };
		for (int j = 0; j < N; ++j) {
			if (i != j && arr[i][j] == 1) {
				if (friends[j] == 0) {
					friends[j] = 1;
					++count;
				}
				for (int k = 0; k < N; ++k) {
					if (j != k && i != k && arr[j][k] == 1) {
						if (friends[k] == 0) {
							friends[k] = 1;
							++count;
						}
					}
				}
			}
		}
		result = max(result, count);
		count = 0;
	}

	cout << result;
}
