#include <iostream>
using namespace std;

int main() {
	int N;
	int R, G, B;
	int result = 0;
	int cost[1001][3] = { 0 };

	cin >> N;
	for (int i = 1; i <= N; ++i) {
		cin >> R >> G >> B;
		cost[i][0] = min(cost[i - 1][1], cost[i - 1][2]) + R;
		cost[i][1] = min(cost[i - 1][0], cost[i - 1][2]) + G;
		cost[i][2] = min(cost[i - 1][0], cost[i - 1][1]) + B;
	}

	cout << min(min(cost[N][0], cost[N][1]), cost[N][2]);
}
