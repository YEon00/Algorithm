#include <algorithm>
#include <string>
#include <iostream>
using namespace std;

int main() {
	string str;

	while (getline(cin, str)) {
		int a, A, n, m;
		for (char x : str) {
			if (x >= 'A' && x <= 'Z')
				A++;
			else if (x >= 'a' && x <= 'z')
				a++;
			else if (x >= 0 && x <= 9)
				n++;
			else if (x ==' ')
				m++;
		}
		cout << a << A << n << m <<'\n';
	}
	return 0;

}