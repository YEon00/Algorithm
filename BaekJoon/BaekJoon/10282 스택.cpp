#include <iostream>
#include <stack>
#include <string>
using namespace std;

struct Stack {
	int data[10000];
	int size;
	Stack() {
		size = 0;
	}
	void push(int num) {
		data[size] = num;
		size += 1;
	}
	bool empty() {
		if (size == 0)
			return true;
		else
			return false;
	}
	int pop() {
		if (empty())
			return -1;
		else {
			size -= 1;
			return data[size-1];
		}
	}
	int top() {
		if (empty())
			return -1;
		else
			return data[size-1];
	}
	int Size() {
		return size;
	}

};
int main() {
	int n;
	cin >> n;

	Stack s;
	while (n--) {
		string str;
		cin >> str;
		if (str == "push") {
			int num;
			cin >> num;
			s.push(num);
		}
		else if (str == "top") {
			cout << (s.empty() ? -1 : s.top()) << '\n';
		}
		else if (str == "size") {
			cout << (s.empty() ? -1 : s.Size()) << '\n';
		}
		else if (str == "empty") {
			cout << s.empty() << '\n';
		}
		else if (str == "pop") {
			cout << (s.empty() ? -1 : s.pop()) << '\n';
			if (!s.empty())
				s.pop();
		}
	}
	return 0;
}