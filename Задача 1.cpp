#include <iostream>
using namespace std;
int main() {
	int x, y, z; // z=x+y
	z = 1;
	while (2020 * z < 78487894) {
		y = 78487894 - 2020 * z;
		x = z - y;
		if (x > 0) {
			cout << x << " " << y << endl;
		}
		z = z + 1;
	}
	return 0;
}	