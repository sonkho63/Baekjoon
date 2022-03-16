#include <iostream>
using namespace std;

int main() {
	int N;
	int arr[10] = { 0 };
	int result[10] = { 0 };

	cin >> N;

	for (int i = 0; i < N; ++i) {
		cin >> arr[i];
	}

	for (int i = 0; i < N; ++i) {
		int j = 0;
		int count = 0;
		while (count < arr[i]) {
			if (result[j] == 0) {
				++count;
			}
			++j;
		}
		while (result[j] != 0) {
			++j;
		}
		result[j] = (i + 1);
	}

	for (int i = 0; i < N; ++i) {
		cout << result[i] << ' ';
	}
}
