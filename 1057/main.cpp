#include <iostream>
using namespace std;

int main() {
	int N, a, b, result = 0;

	cin >> N >> a >> b;
	
	--a; --b;
	while (a != b) {
		a = a >> 1;
		b = b >> 1;
		++result;
	}

	cout << result;
}
