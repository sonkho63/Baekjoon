#include <iostream>
using namespace std;

int main() {
	int N, M, result = 0;
	int setCost, cost;
	int min_setCost = 1000, min_cost = 1000;

	cin >> N >> M;

	for (int i = 0; i < M; ++i) {
		cin >> setCost >> cost;
		min_setCost = min(setCost, min_setCost);
		min_cost = min(cost, min_cost);
	}

	while (N > 0) {
		if (N <= 6) {
			result += min(min_setCost, min_cost * N);
			break;
		}
		else if (min_setCost <= (min_cost * 6)) {
			result += min_setCost;
			N -= 6;
		}
		else {
			result += min_cost * N;
			break;
		}
	}

	cout << result;
}
