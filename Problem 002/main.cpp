#include <iostream>

using namespace std;

int main() {
	int limit = 4000000;
	int sum = 0;
	int a = 1;
	int b = 2;

	while (a <= limit) {
		if (a % 2 == 0) {
			sum += a;
		}
		int next = a + b;
		a = b;
		b = next;
	}

	cout << sum << endl;

	return 0;
}
