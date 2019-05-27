#include <iostream>
using namespace std;
long dp[1001][10];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin >> n;
	long sum = 0;
	for (long i = 0; i <= 9; i++) {
		dp[1][i] = 1;
	}
	for (long i = 2; i <= n; i++) {
		for (long j = 0; j <= 9; j++) {
			for (long k = j; k <= 9; k++) {
				dp[i][j] += dp[i - 1][k];
				dp[i][j] %= 10007;
			}
		}
	}
	for (long i = 0; i <= 9; i++) {
		sum += dp[n][i];
	}
	cout << sum % 10007<<'\n';
	
}