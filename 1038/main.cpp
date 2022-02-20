#include <iostream>
#include <queue>
using namespace std;

int main() {
	int N, i = 0;
	long long result = -1;
	queue<long long> Q;

	cin >> N;
	
	if (N < 10) {
		cout << N;
		return 0;
	}
	
	for (i = 1; i < 10; ++i) {
		Q.push(i);
	}

	while (i <= N && Q.empty() != true) {
		long long num = Q.front();
		Q.pop();
		
		for (int j = 0; j < num % 10; ++j) {
			long long tmp = num * 10 + j;
			if (i == N) {
				cout << tmp;
				return 0;
			}
			++i;
			Q.push(tmp);
		}
	}

	cout << result;
}
