#include <iostream>
#include <string>
using namespace std;

int main() {
	char a[1000001];
	int count=0;

	cin >> a;

	for (int i = 0; i < sizeof(a); i++)
	{
		if (a[i] == '\t') count++;
	}

	cout << count;
}