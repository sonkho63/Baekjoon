#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int xA, xB, xC, yA, yB, yC;
	double lineAB, lineBC, lineCA;
	double round1, round2, round3;

	cin >> xA >> yA >> xB >> yB >> xC >> yC;

	double slope1 = 987654321;
	double slope2 = 987654321;

	if (xA != xB) {
		slope1 = sqrt((yA - yB) * (yA - yB)) / sqrt((xA - xB) * (xA - xB));
	}
	if (xB != xC) {
		slope2 = sqrt((yB - yC) * (yB - yC)) / sqrt((xB - xC) * (xB - xC));
	}

	if (slope1 == slope2) {
		cout << -1;
		return 0;
	}

	lineAB = sqrt((xA - xB) * (xA - xB) + (yA - yB) * (yA - yB));
	lineBC = sqrt((xB - xC) * (xB - xC) + (yB - yC) * (yB - yC));
	lineCA = sqrt((xC - xA) * (xC - xA) + (yC - yA) * (yC - yA));

	round1 = 2 * (lineAB + lineBC);
	round2 = 2 * (lineBC + lineCA);
	round3 = 2 * (lineCA + lineAB);

	printf("%.16g", max(max(round1, round2), round3) - min(min(round1, round2), round3));
}
