#include <iostream>
using namespace std;

int main() {
	long long k, n;
	long long left = 1, right = 0, mid;
	long long tmp, result=0;
	long long a[10001];
	cin >> k >> n;
	for (int i = 0; i < k; i++) {
		cin >> a[i];
		if (a[i] > right)
			right = a[i];
	}
	while (left <= right) {
		tmp = 0;
		mid = (left + right) / 2;
		for (int i = 0; i < k; i++) {
			tmp += a[i] / mid;
		}
		if (tmp >= n) {
			result = mid;
			left = mid + 1;
		}
		else
			right = mid - 1;
		
	}
	cout << result << '\n';

	return 0;
}