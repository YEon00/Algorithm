#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
	int n;
	string str;
	
	bool b;
	cin >> n;
	while (n--)
	{
		b = 1;
		stack<int> s;
		cin >> str;
		for (int i = 0; i < str.length(); i++)
		{
			if (str[i] == '(')
				s.push(1);
			else {
				if (s.empty()) {
					b = 0;
					break;
				}
				else
					s.pop();
			}

		}
		if (s.empty()&&b==true) {
			cout << "Yes" << endl;
		}
		else
			cout << "NO" << endl;
	}

}