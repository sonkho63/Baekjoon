#include <iostream>
using namespace std;

int getDistance(int N, int order, int* iter, int* arr) {
	int a = 0, b = 0;
	int i = *iter;
	while (i != order) {
		if (arr[i - 1] == 0) ++a;
		if (i++ == N) i = 1;
	}
	i = *iter;
	while (i != order) {
		if (arr[i - 1] == 0) ++b;
		if (i-- == 0) i = N;
	}

	*iter = order + 1;
	if (*iter > N) *iter = 1;
	while (arr[*iter - 1] != 0) {
		if ((*iter)++ == N) *iter = 1;
	}
	arr[order - 1] = 1;

	return min(a, b);
}

int main() {
	int N, T;
	int result = 0;
	int iter = 1;
	int next;
	int arr[50] = { 0 };

	cin >> N >> T;

	for (int i = 0; i < T; ++i) {
		cin >> next;
		result += getDistance(N, next, &iter, arr);
	}

	cout << result;
}
