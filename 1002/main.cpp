#include <iostream>
using namespace std;

int main() {
	int N = 0;
	int x1, x2, y1, y2;
	unsigned int r1, r2;
	int sub_x, sub_y;
	int sub_r, sum_r;
	double dst_xy = 0;
	cin >> N;
	while (N--) {
		x1 = 0; x2 = 0; y1 = 0; y2 = 0; r1 = 0; r2 = 0;
		sub_x = 0; sub_y = 0; sub_r = 0; sum_r = 0; dst_xy = 0;
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

		if (x1 == x2 && y1 == y2 && r1 == r2) {
			cout << -1 << endl;
		}
		else {
			sub_x = x2 - x1;
			sub_y = y2 - y1;
			sub_r = r2 - r1;
			sum_r = r1 + r2;

			sub_x *= sub_x;
			sub_y *= sub_y;
			sub_r *= sub_r;
			sum_r *= sum_r;

			if (sub_r < sub_x + sub_y && sub_x + sub_y < sum_r)
				cout << 2 << endl;
			else if ((sub_x + sub_y == sum_r) || (sub_x + sub_y == sub_r))
				cout << 1 << endl;
			else if ((sub_x + sub_y < sub_r) || (sub_x + sub_y > sum_r))
				cout << 0 << endl;
		}
		
	}

	return 0;
}
