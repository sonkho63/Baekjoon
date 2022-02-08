#include <iostream>
#include <string>
#include <regex>
using namespace std;

int main() {
	int T;
	regex re("(100+1+|01)+");

	cin >> T;

	for (int i = 0; i < T; ++i) {
		string signal;
		cin >> signal;

		if (regex_match(signal, re) == 0)
			cout << "NO" << endl;
		else if (regex_match(signal, re) == 1)
			cout << "YES" << endl;
	}
}
