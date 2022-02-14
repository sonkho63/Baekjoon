#include <iostream>
#include <math.h>
using namespace std;

int check(int num) {
	int root = sqrt(num);
	if (root * root == num) {
		return num;
	}
	else {
		return -1;
	}
}

int main() {
	int arr[10][10] = { 0 };
	int N, M;
	int result = -1;
	cin >> N >> M;
	
	for (int i = 0; i < N; ++i) {
		char tmp[10];
		cin >> tmp;
		for (int j = 0; j < M; ++j) {
			arr[i][j] = (int)tmp[j] - 48;
		}
	}

	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < M; ++j) {
			for (int d_i = -N; d_i < N; ++d_i) {
				for (int d_j = -M; d_j < M; ++d_j) {
					if (d_i == 0 && d_j == 0) continue;
					int x = i, y = j, num = 0;
					while (x >= 0 && x < N && y >= 0 && y < M) {
						num = (num * 10) + arr[x][y];
						x += d_i;
						y += d_j;

						if (check(num) > result) {
							result = num;
						}
					}
					if (check(num) > result) {
						result = num;
					}
				}
			}
		}
	}
	cout << result;
}
