#include <iostream>
using namespace std;

int main() {
	int T;
	int n,m;
	char a[50][50];
	int sum = 0;
	cin >> T;
	for (int i = 1; i <= T; i++) {
		cin >> n;
		m = n/ 2;
		for (int j = 0; j <n ; j++) {
			for (int k = 0; k < n; k++) {
				cin >> a[j][k];
				if (j <= m)
				{
					if (k >= m - j && k <= m + j)
						sum += a[j][k]-'0';

				}
				if (j > m) {
					if (k >= j - m && k < n-j+m)
						sum += a[j][k] - '0';

				}
				
			}

		}
		cout << "#" << T <<' '<< sum<<'\n';

	}

}