#include <iostream>
using namespace std;

int main() {
	long long N;
	int F, result = 0;

	cin >> N >> F;
	
	N -= (N % 100);

	for (result = 0; result < 100; ++result) {
		if (N % F == 0) {
			break;
		}
		++N;
	}

	printf("%02d", result);
}
