#include <iostream>
#include <string>
using namespace std;

int main() {
	int arr[26] = { 0 };
	string tmp;
	char result = '?';
	int max = 0;
	
	cin >> tmp;

	for (int i = 0; i < tmp.size(); ++i) {
		if ('A' <= tmp[i] && tmp[i] <= 'Z') {
			++arr[tmp[i] - 'A'];
		}
		if ('a' <= tmp[i] && tmp[i] <= 'z') {
			++arr[tmp[i] - 'a'];
		}
	}

	for (int i = 0; i < 26; ++i) {
		if (max < arr[i]) {
			max = arr[i];
			result = i + 'A';
		}
		else if (max == arr[i]) {
			result = '?';
		}
	}

	cout << result;
}
