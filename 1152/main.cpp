#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	int result = 0, iter = 0;
	bool blankMode = false;

	getline(cin, str);

	while (!str.empty() && str.front() == ' ') {
		str.erase(str.begin());
	}

	while (!str.empty() && str.back() == ' ') {
		str.erase(str.end() - 1);
	}

	while (iter < str.size()) {
		if (blankMode == false && str.at(iter) == ' ') {
			blankMode = true;
			++result;
		}
		else if (blankMode == true && str.at(iter) != ' ') {
			blankMode = false;
		}
		++iter;
	}

	if (!str.empty()) ++result;

	cout << result;
}
