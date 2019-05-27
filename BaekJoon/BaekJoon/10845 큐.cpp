#include <iostream>
#include <queue>
#include <string>
using namespace std;


int main() {
	queue <int> q;
	int n;
	string str;
	cin >> n;

	while (n--) {
		cin >> str;
		if (str == "push")
		{
			int x;
			cin >> x;
			q.push(x);

		}
		else if (str == "pop")
		{
			if (q.empty())
				cout << -1 << '\n';
			else {
				cout << q.front() << '\n';
				q.pop();
			}
		}
		else if (str == "size") {
			cout << q.size() <<'\n';
		}
		else if (str == "empty") {
			if (q.empty())
				cout << 1 << '\n';
			else
				cout << 0 << '\n';
		}
		else if (str == "front") {
			if (q.empty())
				cout << -1 << '\n';
			else
				cout << q.front() << '\n';
		}
		else if (str == "back") {
			if (q.empty())
				cout << -1 << '\n';
			else
				cout << q.back() << '\n';
		}
	}
}