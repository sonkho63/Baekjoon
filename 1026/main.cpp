#include <iostream>
using namespace std;

void quick_sort_up(int* arr, int left, int right) {
	if (left >= right) return;

	int tmp;
	int pivot, low, high;

	pivot = left;
	low = pivot + 1;
	high = right;

	while (low <= high) {
		while (low <= right && arr[low] <= arr[pivot]) {
			++low;
		}
		while (high > left && arr[high] >= arr[pivot]) {
			--high;
		}
		if (low <= high) {
			tmp = arr[low];
			arr[low] = arr[high];
			arr[high] = tmp;
		}
		else {
			tmp = arr[high];
			arr[high] = arr[pivot];
			arr[pivot] = tmp;
		}
	}

	quick_sort_up(arr, left, high - 1);
	quick_sort_up(arr, high + 1 , right);
}

void quick_sort_down(int* arr, int left, int right) {
	if (left >= right) return;

	int tmp;
	int pivot, low, high;

	pivot = left;
	high = pivot + 1;
	low = right;

	while (low >= high) {
		while (high <= right && arr[high] >= arr[pivot]) {
			++high;
		}
		while (low > left && arr[low] <= arr[pivot]) {
			--low;
		}
		if (high <= low) {
			tmp = arr[low];
			arr[low] = arr[high];
			arr[high] = tmp;
		}
		else {
			tmp = arr[low];
			arr[low] = arr[pivot];
			arr[pivot] = tmp;
		}
	}

	quick_sort_down(arr, left, low - 1);
	quick_sort_down(arr, low + 1, right);
}

int main() {
	int N;
	int A[50] = { 0 }, B[50] = { 0 };
	int result = 0;

	cin >> N;

	for (int i = 0; i < N; ++i) {
		cin >> A[i];
	}
	for (int i = 0; i < N; ++i) {
		cin >> B[i];
	}

	quick_sort_up(A, 0, N - 1);
	quick_sort_down(B, 0, N - 1);

	for (int i = 0; i < N; ++i) {
		result += (A[i] * B[i]);
	}

	cout << result;
}
