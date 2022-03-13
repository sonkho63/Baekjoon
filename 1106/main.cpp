#include <iostream>
using namespace std;

int main() {
	int C, N, result = 123456;
	int cost[20] = { 0 };
	int benefit[20] = { 0 };
	int cost_DP[100001] = { 0 };

	cin >> C >> N;
	
	for (int i = 0; i < N; ++i) {
		cin >> cost[i] >> benefit[i];
	}

	for (int i = 1; i <= 100000; ++i) {
		for (int j = 0; j < N; ++j) {
			if (i % cost[j] == 0) {
				cost_DP[i] = max((i / cost[j]) * benefit[j], cost_DP[i]);
			}
			if (i - cost[j] >= 0) {
				cost_DP[i] = max(cost_DP[i - cost[j]] + benefit[j], cost_DP[i]);
			}
		}
		if (C <= cost_DP[i]) {
			cout << i;
			return 0;
		}
	}

	return 0;
}
