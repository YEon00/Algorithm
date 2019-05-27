#include <iostream>
using namespace std;

int main() {
	long long n;
	cin >> n;
	long long dp[101][101];
	long long sum = 0;
	dp[1][0] = 0;
	for (int i = 1; i <= 9; i++) {
		dp[1][i] = 1;
	}
	for (long long i = 2; i <= n; i++) {
		for (long long j = 0; j <= 9; j++) {
			if (j == 0) {
				dp[i][j] = dp[i - 1][j+1];
			}
			if (j == 9) {
				dp[i][j] = dp[i - 1][j - 1];
			}
			else{
				dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j + 1];

			}
			dp[i][j] %= 1000000000;
		}
		
	}
	for (int i = 0; i <= 9; i++) {
		sum += dp[n][i];
	}
	cout << sum % 1000000000;

}