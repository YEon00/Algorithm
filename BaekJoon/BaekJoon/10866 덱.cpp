#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main() {
	deque <int> dq;
	int n;
	string str;
	cin >> n;
	while (n--) {
		cin >> str;
		if (str == "push_front") {
			int m;
			cin >> m;
			dq.push_front(m);

		}
		else if (str == "push_back") {
			int m;
			cin >> m;
			dq.push_back(m);
		}
		else if (str == "pop_front") {
			if (dq.empty())
				cout << -1 << '\n';
			else {
				cout << dq.front() << '\n';
				dq.pop_front();
			}
		}
		else if (str == "pop_back") {
			if (dq.empty())
				cout << -1 << '\n';
			else {
				cout << dq.back() << '\n';
				dq.pop_back();
			}
		}
		else if (str == "size") {
			cout << dq.size()<<'\n';
		}
		else if (str == "empty") {
			if (dq.empty())
				cout << 1 << '\n';
			else if(!dq.empty())
				cout << 0 << '\n';
		}
		else if (str == "front") {
			if (dq.empty())
				cout << -1 << '\n';
			else if (!dq.empty())
				cout << dq.front() << '\n';
		}
		else if (str == "back") {
			if (dq.empty())
				cout << -1 << '\n';
			else if (!dq.empty())
				cout << dq.back() << '\n';


		}
	}
}