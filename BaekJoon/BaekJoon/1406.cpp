#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {
	//ios_base::sync_with_stdio(false);
	//cin.tie(NULL);
	//cout.tie(NULL);

	stack <char> left, right;
	string str;

	int n;
	cin >> str;
	for (int i = 0; i < str.length(); i++) {
		left.push(str[i]);
	}
	// stack<int> left(str.begin(), str.end());
	cin >> n;

	while (n--) {
		char cur;
		cin >> cur;
		if (cur == 'L') {
			if (!left.empty()) {
				right.push(left.top());
				left.pop();
			}
		}
		else if (cur == 'D') {
			if (!right.empty()) {
				left.push(right.top());
				right.pop();
			}

		}
		else if (cur == 'P') {
			char c;
			cin >> c;
			left.push(c);
		}
		else if (cur == 'B') {
			if (!left.empty())
				left.pop();
		}
	}
	while (!left.empty()) {
		right.push(left.top());
		left.pop();
	}
	while (!right.empty()) {
		cout << right.top();
		right.pop();
	}
	cout << '\n' << endl;

}