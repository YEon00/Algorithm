#include <iostream>
#include <string>
using namespace std;

int main() {
	int m,n;
	int x=20;
	int s = 0;
	string a;
	while (m--) {
		cin >> a;
		if (a == "add") {
			cin >> n;
			s = s | (1 << n);
		}
		else if (a == "remove") {
			cin >> n;
			s = s & ~(1 << n);
		}
		else if (a == "check") {
			cin >> n;
			int check = s & (1 << n);
			if (check) {
				puts("1");
			}
			else
				puts("0");
		}
		else if (a == "toggle") {
			cin >> n;
			s = s ^ (1 << n);
		}
		else if (a == "all") {
			s = (1 << x) - 1;
		}
		else if (a == "empty") {
			s = 0;

		}
	}return 0;

}