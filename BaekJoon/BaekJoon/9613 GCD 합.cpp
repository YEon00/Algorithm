#include <iostream>
using namespace std;
int a[101];
int gcd(int x, int y) {
	if (y == 0)
		return x;
	else
		return gcd(y, x%y);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t, n;
	long long sum = 0;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n;
		for (int j = 0; j < n; j++){
			cin >> a[j];
		}
		for (int j = 0; j < n - 1; j++) {
			for (int k = j + 1; k < n; k++) {
				sum += gcd(a[j], a[k]);
			}
		}
		cout << sum << '\n';
		sum = 0;
	}
	return 0;
}