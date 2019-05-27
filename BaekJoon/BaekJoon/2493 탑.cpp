#include <iostream>
#include <stack>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n,t;
	stack <pair<int,int>> s;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> t;
		while (!s.empty()) {
			if (t < s.top().second) {
				cout << s.top().first<<" ";
				break;
			}
			s.pop();
		}
		if (s.empty())
			cout << "0 ";
		s.push(make_pair(i, t));
	}
}