#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int N, result = 0;
	vector<string> arr;
	string tmp;
	int sameCount = 0;

	cin >> N;
	for (int i = 0; i < N; ++i) {
		cin >> tmp;

		arr.push_back(tmp);
	}
	
	sort(arr.begin(), arr.end());

	for (int i = 0; i < N; ++i) {
		bool flag = true;
		
		for (int j = i + 1; j < N; ++j) {
			if (arr[j].find(arr[i]) == 0) {
				flag = false;
				break;
			}
		}

		if (flag) ++result;
	}

	cout << result;
}
