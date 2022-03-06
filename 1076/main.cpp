#include <iostream>
#include <string>
using namespace std;

int main() {
	string color;
	int value[3] = { 0 };
	long long result = 0;

	for (int i = 0; i < 3; ++i) {
		cin >> color;
		
		if (color == "black") {
			value[i] = 0;
		}
		else if (color == "brown") {
			value[i] = 1;
		}
		else if (color == "red") {
			value[i] = 2;
		}
		else if (color == "orange") {
			value[i] = 3;
		}
		else if (color == "yellow") {
			value[i] = 4;
		}
		else if (color == "green") {
			value[i] = 5;
		}
		else if (color == "blue") {
			value[i] = 6;
		}
		else if (color == "violet") {
			value[i] = 7;
		}
		else if (color == "grey") {
			value[i] = 8;
		}
		else if (color == "white") {
			value[i] = 9;
		}
	}

	result = value[0] * 10 + value[1];
	
	for (int i = 0; i < value[2]; ++i) {
		result *= 10;
	}

	cout << result;
}
