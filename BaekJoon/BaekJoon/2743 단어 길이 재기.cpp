//#include <stdio.h>
//#include <math.h>
//
//int Sosu(int n);
//
//int main() {
//	int T; // �׽�Ʈ ���̽� ����
//	int part1, part2;
//	int n; // �Է¹��� ��.
//	int i, j;
//	scanf("%d", &T);
//
//	for (i = 0; i < T; i++) {
//		scanf("%d", &n);
//		for (j = 0; j <= n / 2; j++) { // j <= n/2 =�� �߿� part1 = part2�� �ִ�
//			if (n < j) {
//				break;
//			}
//			if (Sosu(j) && Sosu(n - j) { // j�� n-j�� ��� �Ҽ����� ��.
//				part1 = j;
//				part2 = n - j; // ��� �����ϴٺ��� j <= n/2�� �����ϴ� �� �Ҽ��� ���̰� ���� ���� ������ ��Ƽ���� ����. 
//			} // ���̰� ���� ���� ������ ��Ƽ���� ������ ������ ����Ǵ� j�� n/2�� ���� ������ ����.
//		}
//		printf("%d %d\n", part1, part2);
//	}
//}
//
//int Sosu(int n) {
//	int i;
//	if (n == 1) {
//		return 0;
//	}
//	else if (n == 2) {
//		return 1;
//	}
//	for (i = 2; i <= sqrt((double)n); i++) {
//		if (n % i == 0) {
//			return 0;
//		}
//	}
//	return 1;
//}






#include <iostream>
#include <queue>
#include <vector>
#include <string>
#include <string.h>
#include <tuple>
#include <algorithm>
#define inf 987654321
using namespace std;

typedef pair<int, int> P;
int n, res;

vector<P> v;
void func(int cur, int cnt) {
	if (cur == n) {
		res = max(res, cnt);
		return;
	}

	if (v[cur].first <= 0) return func(cur + 1, cnt);   // ���� �� ����� �������� ���� ������� �Ѿ

	for (int i = 0; i < n; i++) {
		if (cur == i || v[i].first <= 0) continue;  // �� ����� ���� ��� �ִ� ����̰ų� ���� ����̸� �н�

		v[cur].first -= v[i].second;
		v[i].first -= v[cur].second;  // �ε�ģ ������� ������ ����
		int t = 0;
		if (v[cur].first <= 0) {   // ��� �ִ� ����� ������
			t++;
		}
		if (v[i].first <= 0) {   // �ε��� ����� ������
			t++;
		}
		func(cur + 1, cnt + t);
		v[cur].first += v[i].second;  // �ʱ�ȭ
		v[i].first += v[cur].second;
	}
	res = max(res, cnt);
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);

	cin >> n;
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		v.push_back({ a,b });
	}
	func(0, 0);
	cout << res << '\n';

	return 0;
}

int main() {
	int t,n,a[101];
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n;
	}
	
	
}