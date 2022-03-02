#include <iostream>
#include <cstring>
using namespace std;

int timeCost[1000] = { 0 };
long long dp[1000] = { 0 };
bool tech[1000][1000] = { 0 };

long long solve(int W, int N) {
	if (dp[W] != -1) return dp[W];

	dp[W] = timeCost[W];
	for (int i = 0; i < N; ++i) {
		if (tech[i][W] == true) {
			dp[W] = max(dp[W], solve(i, N) + timeCost[W]);
		}
	}

	return dp[W];
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T, N, K, tmp1, tmp2, W;

	cin >> T;

	for (int i = 0; i < T; ++i) {
		cin >> N >> K;

		memset(dp, -1, sizeof(dp));
		memset(tech, 0, sizeof(tech));

		for (int j = 0; j < N; ++j) {
			cin >> timeCost[j];
		}
		for (int j = 0; j < K; ++j) {
			cin >> tmp1 >> tmp2;
			tech[tmp1 - 1][tmp2 - 1] = true;
		}
		cin >> W;

		cout << solve(W - 1, N) << '\n';
	}
}
