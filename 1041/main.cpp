#include <iostream>
using namespace std;

int get_single(int A, int B, int C, int D, int E, int F) {
	return min(min(min(A, F), min(C, D)), min(B, E));
}

int get_double(int A, int B, int C, int D, int E, int F) {
	int min_num = get_single(A, B, C, D, E, F);

	if (min_num == A || min_num == F) {
		return min_num + min(min(B, E), min(C, D));
	}
	else if (min_num == B || min_num == E) {
		return min_num + min(min(A, F), min(C, D));
	}
	else if (min_num == C || min_num == D) {
		return min_num + min(min(A, F), min(B, E));
	}
}

int get_triple(int A, int B, int C, int D, int E, int F) {
	int min_num = get_single(A, B, C, D, E, F);
	int result = 0;
	if (min_num == A || min_num == F) {
		return min_num + min(B, E) + min(C, D);
	}
	else if (min_num == B || min_num == E) {
		return min_num + min(A, F) + min(C, D);
	}
	else if (min_num == C || min_num == D) {
		return min_num + min(A, F) + min(B, E);
	}
}

int main() {
	long long N;
	long long sin, dou, tri;
	int A, B, C, D, E, F;
	long long result = 0;

	cin >> N >> A >> B >> C >> D >> E >> F;

	if (N == 1) {
		result = A + B + C + D + E + F;
		result -= max(max(max(A, F), max(C, D)), max(B, E));
		cout << result;
		return 0;
	}
	else if (N > 1) {
		sin = 4 * ((N - 2) * (N - 1)) + ((N - 2) * (N - 2));
		dou = 4 * ((N - 1) + (N - 2));
		tri = 4;

		sin *= get_single(A, B, C, D, E, F);
		dou *= get_double(A, B, C, D, E, F);
		tri *= get_triple(A, B, C, D, E, F);

		cout << sin + dou + tri;
	}
}
