#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int T;
	long long x, y;
	long long tmp, tmp2;

	cin >> T;

	for (int i = 0; i < T; ++i) {
		cin >> x >> y;
		
		tmp = sqrt(y - x);
		tmp2 = tmp * tmp;

		if (tmp2 == (y - x)) {
			cout << 2 * tmp - 1 << endl;
		}
		else if ((tmp2 < (y - x)) && ((y - x) <= tmp2 + tmp)) {
			cout << 2 * tmp << endl;
		}
		else if ((tmp2 + tmp < (y - x)) && ((y - x) < (tmp + 1) * (tmp + 1))) {
			cout << 2 * tmp + 1 << endl;
		}
	}
}
