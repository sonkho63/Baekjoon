#include <iostream>
using namespace std;

int main() {
	long long X, Y;
	int Z;
	int low = 0, high = 1000000000;
	int tmp, result = -1;

	cin >> X >> Y;
	
	Z = Y * 100 / X;

	if (Z >= 99) {
		cout << -1;
		return 0;
	}

	while (low <= high) {
		int mid = (high + low) / 2;
		tmp = (Y + mid) * 100 / (X + mid);
		if (tmp <= Z) {
			low = mid + 1;
			result = mid + 1;
		}
		else {
			high = mid - 1;
		}
	}

	cout << result;
}
