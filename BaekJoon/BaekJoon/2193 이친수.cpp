#include <iostream>
using namespace std;

int main() {
	int memo[100];
	int n;
	cin >> n;
	memo[0] = 0;
	memo[1] = 1;
	for (int i = 2; i <= n; i++) {
		memo[i] = memo[i - 1] + memo[i - 2];
		
	}
	cout << memo[n] << '\n';
}