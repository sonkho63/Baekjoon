#include <iostream>
using namespace std;

int get_gcd(int a, int b) {
	int tmp;
	while (b != 0) {
		tmp = a % b;
		a = b;
		b = tmp;
	}
	return a;
}

int get_lcm(int a, int b) {
	return a * (b / get_gcd(a, b));
}

int get_lcm(int a, int b, int c) {
	return get_lcm(get_lcm(a, b), c);
}

int main() {
	int arr[5] = { 0 };
	int min_lcm = 2147483647;
	int tmp_lcm;
	
	for (int i = 0; i < 5; ++i) {
		cin >> arr[i];
	}

	for (int i = 0; i < 5; ++i) {
		for (int j = i + 1; j < 5; ++j) {
			for (int k = j + 1; k < 5; ++k) {
				tmp_lcm = get_lcm(arr[i], arr[j], arr[k]);
				if (tmp_lcm < min_lcm) {
					min_lcm = tmp_lcm;
				}
			}
		}
	}
	cout << min_lcm;
}
