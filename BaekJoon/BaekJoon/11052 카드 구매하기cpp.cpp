#include <iostream>
using namespace std;
int memo[1001], p[10001];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, max = -1;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> p[i];
	}
	memo[0] = 0;
	memo[1] = p[1];

	for (int i = 2; i <= n; i++) {
		for (int j = 1; j <= i; j++)
		{
			if (memo[i - j] + p[j] > max)
				max = memo[i - j] + p[j];
		}
		memo[i] = max;
		max = -1;
	}

	cout << memo[n]<<'\n';

	return 0;
}