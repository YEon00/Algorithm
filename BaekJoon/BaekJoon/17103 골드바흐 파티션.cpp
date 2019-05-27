#include <iostream>
#include <algorithm>
using namespace std;

int Sosu(int n) {
	int i;
	if (n == 1) {
		return 0;
	}
	else if (n == 2) {
		return 1;
	}
	for (i = 2; i <= sqrt((double)n); i++) {
		if (n % i == 0) {
			return 0;
		}
	}
	return 1;
}

int main() {
	int T,n; 
	int p1, p2;
	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> n;
		for (int j = 0; j <= n / 2; j++) {
			if (n < j) {
				break;
			}
			if (Sosu(j) && Sosu(n - j)) {
				p1 = j;
				p2 = n - j;
			}
		}
		cout << p1 << p2;
	}
}


