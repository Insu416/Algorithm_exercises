#include <iostream>

using namespace std;

int getGCD(int x, int y);
int getLCM(int x, int y, int gcd);

int main() {
	int x = 0, y = 0;
	int gcd = 0, lcm = 0;

	cin >> x >> y;

	gcd = getGCD(x, y);
	lcm = getLCM(x, y, gcd);

	cout << "Greatest Common Divisor of " << x << " and " << y << " = " << gcd << endl
		<< "Least Common Multiple of " << x << " and " << y << " = " << lcm << endl;

	return 0;
}

int getGCD(int x, int y) {
	int temp;

	while (y != 0) {
		temp = y;
		y = x % y;
		x = temp;
	}

	return x;
}

int getLCM(int x, int y, int gcd) {
	return (x*y) / gcd;
}
