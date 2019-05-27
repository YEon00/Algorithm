#include <iostream>
using namespace std;

int gcd(int x, int y) {
	if (y == 0)
		return x;
	else
		return gcd(y, x%y);
}

int main() {
	int T, A, B;
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> A>> B;
		int g = gcd(A, B);
		cout << A * B / g<<'\n';
	}
}