#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N, M, result = 0;
	int tmp, tmp2;
	int people[50] = { 0 };
	vector<int> partyPeople;
	vector<int> party[50];

	cin >> N >> M >> tmp;

	for (int i = 0; i < tmp; ++i) {
		cin >> tmp2;
		people[tmp2 - 1] = 1;
	}
	
	for (int i = 0; i < M; ++i) {
		bool flag = false;
		cin >> tmp;
		for (int j = 0; j < tmp; ++j) {
			cin >> tmp2;
			partyPeople.push_back(tmp2 - 1);
			party[i].push_back(tmp2 - 1);
			if (people[tmp2 - 1] == 1) {
				flag = true;
			}
		}
		if (flag) {
			while (!partyPeople.empty()) {
				people[partyPeople.back()] = 1;
				partyPeople.pop_back();
			}
		}
		else {
			while (!partyPeople.empty()) {
				partyPeople.pop_back();
			}
		}
	}

	int count = 1;
	while (count--) {
		for (int i = 0; i < M; ++i) {
			bool flag = false;
			for (int j = 0; j < party[i].size(); ++j) {
				if (people[party[i].at(j)] == 1) {
					flag = true;
					break;
				}
			}
			if (flag) {
				for (int j = 0; j < party[i].size(); ++j) {
					if (people[party[i].at(j)] == 0) {
						++count;
					}
					people[party[i].at(j)] = 1;
				}
			}
		}
	}

	for (int i = 0; i < M; ++i) {
		bool flag = false;
		while (!party[i].empty()) {
			if (people[party[i].back()] == 1) {
				flag = true;
				break;
			}
			party[i].pop_back();
		}
		if (flag == false) {
			++result;
		}
	}

	cout << result;
}
