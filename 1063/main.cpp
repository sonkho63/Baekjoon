#include <iostream>
#include <cstring>
using namespace std;

bool moving(int* x, int* y, string* order) {
	if ((*order) == string("B")) {
		if ((*y) > 1) {
			--(*y);
			return true;
		}
	}
	else if ((*order) == string("T")) {
		if ((*y) < 8) {
			++(*y);
			return true;
		}
	}
	else if ((*order) == string("R")) {
		if ((*x) < 8) {
			++(*x);
			return true;
		}
	}
	else if ((*order) == string("L")) {
		if ((*x) > 1) {
			--(*x);
			return true;
		}
	}
	else if ((*order) == string("RT")) {
		if ((*x) < 8 && (*y) < 8) {
			++(*x);
			++(*y);
			return true;
		}
	}
	else if ((*order) == string("LT")) {
		if ((*x) > 1 && (*y) < 8) {
			--(*x);
			++(*y);
			return true;
		}
	}
	else if ((*order) == string("RB")) {
		if ((*x) < 8 && (*y) > 1) {
			++(*x);
			--(*y);
			return true;
		}
	}
	else if ((*order) == string("LB")) {
		if ((*x) > 1 && (*y) > 1) {
			--(*x);
			--(*y);
			return true;
		}
	}
	return false;
}

int main() {
	string pos1, pos2, move;
	int N, king_x, king_y, stone_x, stone_y, tmp_x, tmp_y;

	cin >> pos1 >> pos2 >> N;

	king_x = pos1[0] - 64;
	king_y = pos1[1] - 48;
	stone_x = pos2[0] - 64;
	stone_y = pos2[1] - 48;

	for (int i = 0; i < N; ++i) {
		bool flag = true;
		cin >> move;

		tmp_x = king_x;
		tmp_y = king_y;
		moving(&tmp_x, &tmp_y, &move);
		if (tmp_x == stone_x && tmp_y == stone_y) {
			flag = moving(&stone_x, &stone_y, &move);
		}
		if (flag == true) {
			king_x = tmp_x;
			king_y = tmp_y;
		}
	}
  
	cout << (char)(king_x + 64) << king_y << '\n' << (char)(stone_x + 64) << stone_y;
}
