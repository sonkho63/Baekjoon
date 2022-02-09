#include <iostream>
using namespace std;

void quickSort(int start, int end, int* arr) {
	if(start >= end) return;
	
	int low = start, high = end, tmp;
	int pivot = low++;

	while (low <= high) {
		while (low <= end && arr[low] <= arr[pivot]) {
			++low;
		}
		while (high > start && arr[high] >= arr[pivot]) {
			--high;
		}

		if (low > high) {
			tmp = arr[pivot];
			arr[pivot] = arr[high];
			arr[high] = tmp;
		}
		else {
			tmp = arr[low];
			arr[low] = arr[high];
			arr[high] = tmp;
		}
	}

	quickSort(start, high - 1, arr);
	quickSort(high + 1, end, arr);
}

int main() {
	int A[51] = { 0 }, B[51] = { 0 }, result[51] = { 0 };
	int N, count = 0;

	cin >> N;

	for (int i = 0; i < N; ++i) {
		cin >> A[i];
		B[i] = A[i];
	}

	quickSort(0, N - 1, B);
	
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < N; ++j) {
			if (B[i] == A[j]) {
				result[j] = count++;
				A[j] = 0;
				break;
			}
		}
	}

	for (int i = 0; i < N; ++i) {
		cout << result[i] << ' ';
	}
}
