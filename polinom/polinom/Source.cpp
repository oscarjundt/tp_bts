#include <math.h>
#include <iostream>

using namespace std;

int main() {
	int a;
	int b;
	int c;
	int delta;
	int solution1;
	int solution2;
	cin >> a;
	cin >> b;
	cin >> c;
	if (a == 0 && b == 0 && c == 0) {
		cout << "il y'a une infinite de solution" << endl;
	}
	else if (a == 0 && b == 0 && c != 0) {
		cout << "aucun solution" << endl;
	}
	else {
		delta = (b * b) - (4 * a * c);
		if (delta == 0) {
			cout << "une solution: " << (-b)/(2*a) <<endl;

		}
		else if (delta > 0) {
			solution1 = (-b + sqrt(delta)) / (2 * a);
			solution2 = (-b - sqrt(delta)) / (2 * a);
			cout << solution1 << " et " << solution2 << endl;
		}
		else if (delta < 0) {
			solution1 = (-b) / (2 * a) + sqrt((abs(-delta)) / (2 * a));
			solution2 = (-b) / (2 * a) - sqrt((abs(-delta)) / (2 * a));
			cout << solution1 << " et " << solution2 << endl;
		}
	}
}