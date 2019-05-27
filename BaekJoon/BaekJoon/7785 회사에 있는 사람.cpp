#include <iostream>
#include <string>
#include <set>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	set <string> s;
	set <string>::reverse_iterator iter;
	int n;
	string str, log;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> str >> log;
		if (log == "enter") {
			s.insert(str);
		}
		else if (log == "leave") {
			s.erase(str);
		}
	}
	for (iter = s.rbegin(); iter != s.rend(); iter++) {
		cout << *iter << '\n';
	}
}
