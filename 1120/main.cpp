#include <iostream>
#include <cstring>
using namespace std;

int main() {
	string a, b;
	int result = 50;

	cin >> a >> b;
	
	for (int i = 0; i <= b.size() - a.size(); ++i) {
		int count = 0;
		
		for (int j = 0; j < a.size(); ++j) {
			if (a[j] != b[i + j]) {
				++count;
			}
		}

		result = min(result, count);
	}

	cout << result;
}
