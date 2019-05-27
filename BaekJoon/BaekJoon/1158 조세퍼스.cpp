#include <iostream>
#include <queue>
using namespace std;

int main() {
	queue <int> q;
	int n, m;
	cin >> n;
	cin >> m;
	for (int i = 1; i <= n; i++) {
		q.push(i);
	}
	cout << "<";
	for (int i = 1; i <= n; i++) {
		for (int i = 1; i < m; i++) {
			q.push(q.front());
			q.pop();
		}
		cout << q.front();
		q.pop();
		if (!q.empty())
			cout << ", ";
	}
	cout << ">" << '\n';
}