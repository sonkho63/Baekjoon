#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int r1, r2, c1, c2, anchor, anchorNum, maxNum = 0, count = 1;
	int tmp = 0;
	int arr[50][5] = { 0 };

	cin >> r1 >> c1 >> r2 >> c2;

	for (int i = r1; i <= r2; ++i) {
		for (int j = c1; j <= c2; ++j) {
			anchor = max(abs(i), abs(j));
			anchorNum = (2 * anchor + 1) * (2 * anchor + 1);

			if (i == anchor) {
				tmp = anchorNum - anchor + j;
				maxNum = max(maxNum, tmp);
				arr[i - r1][j - c1] = tmp;
				continue;
			}
			anchorNum -= 2 * anchor;
			if (j == -anchor) {
				tmp = anchorNum - anchor + i;
				maxNum = max(maxNum, tmp);
				arr[i - r1][j - c1] = tmp;
				continue;
			}
			anchorNum -= 2 * anchor;
			if (i == -anchor) {
				tmp = anchorNum - anchor - j;
				maxNum = max(maxNum, tmp);
				arr[i - r1][j - c1] = tmp;
				continue;
			}
			anchorNum -= 2 * anchor;
			if (j == anchor) {
				tmp = anchorNum - anchor - i;
				maxNum = max(maxNum, tmp);
				arr[i - r1][j - c1] = tmp;
			}
		}
	}

	while (maxNum >= 10) {
		maxNum /= 10;
		++count;
	}

	for (int i = r1; i <= r2; ++i) {
		for (int j = c1; j <= c2; ++j) {
			printf("%*d ", count, arr[i - r1][j - c1]);
		}
		cout << endl;
	} 
}
