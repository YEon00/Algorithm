#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
	string str;
	int cnt=0;
	int m = 0;
	stack <int> s;

	cin >> str;
	for (int i = 0; i < str.length();i++){
		if (str[i] == '(') {
			s.push(1);
			m++;
		}
		else {
			if (str[i - 1] == '(') {
				s.pop();
				cnt += s.size();
				m--;
			}
			else
				s.pop();

		}

	}
	cout << cnt+m << endl;

}