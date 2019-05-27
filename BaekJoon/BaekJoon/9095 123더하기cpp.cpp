#include <iostream>
using namespace std;
int d[11];

int main() {
	int T, n;
	cin >> T;
	d[0] = 0;
	d[1] = 1;
	d[2] = 2;
	d[3] = 4;
	while(T--){
		cin >> n;
		for (int j = 4; j <= n; j++) {
			d[j] = d[j - 3] + d[j - 2] + d[j - 1];
		}
		cout << d[n]<<'\n';
	}

}