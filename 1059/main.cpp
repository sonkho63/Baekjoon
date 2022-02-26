#include <iostream>
using namespace std;

int main() {
	int L, N;
	int S[50] = { 0 };
	int low = 0, high = 1000;
	int result = 0;

	cin >> L;
	for (int i = 0; i < L; ++i) {
		cin >> S[i];
	}
	cin >> N;

	for (int i = 0; i < L; ++i) {
		if (S[i] < N && S[i] > low) {
			low = S[i];
		}
		if (S[i] == N) {
			cout << 0;
			return 0;
		}
		if (S[i] > N && S[i] < high) {
			high = S[i];
		}
	}
	
	for (int i = low + 1; i <= N; ++i) {
		for (int j = N; j < high; ++j) {
			if (i != j) ++result;
		}
	}
	
	cout << result;
}
