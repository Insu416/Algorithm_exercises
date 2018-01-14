//x + y + z = 100
//print all natural number values.

#include <iostream>

using namespace std;

int main() {
	int x=0, y=0, z=0;

	x = 0;
	while (x <= 100) {
		y = 0;
		while ((x+y) <= 100) {
			z = 100 - x - y;

			cout << x << " " << y << " " << z << endl;

			y++;
		}

		x++;
	}

	return 0;
}
