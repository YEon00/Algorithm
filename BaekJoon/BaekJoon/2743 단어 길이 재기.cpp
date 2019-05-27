//#include <stdio.h>
//#include <math.h>
//
//int Sosu(int n);
//
//int main() {
//	int T; // 테스트 케이스 개수
//	int part1, part2;
//	int n; // 입력받은 수.
//	int i, j;
//	scanf("%d", &T);
//
//	for (i = 0; i < T; i++) {
//		scanf("%d", &n);
//		for (j = 0; j <= n / 2; j++) { // j <= n/2 =가 중요 part1 = part2도 있다
//			if (n < j) {
//				break;
//			}
//			if (Sosu(j) && Sosu(n - j) { // j와 n-j가 모두 소수여야 함.
//				part1 = j;
//				part2 = n - j; // 계속 갱신하다보면 j <= n/2를 만족하는 두 소수의 차이가 가장 적은 골드바흐 파티션이 나옴. 
//			} // 차이가 가장 적은 골드바흐 파티션이 나오는 이유는 저장되는 j가 n/2에 가장 가깝기 때문.
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

	if (v[cur].first <= 0) return func(cur + 1, cnt);   // 현재 쥔 계란이 깨졌으면 다음 계란으로 넘어감

	for (int i = 0; i < n; i++) {
		if (cur == i || v[i].first <= 0) continue;  // 깰 계란이 현재 쥐고 있는 계란이거나 깨진 계란이면 패스

		v[cur].first -= v[i].second;
		v[i].first -= v[cur].second;  // 부딪친 계란들은 내구력 감소
		int t = 0;
		if (v[cur].first <= 0) {   // 쥐고 있는 계란이 깨지면
			t++;
		}
		if (v[i].first <= 0) {   // 부딪힌 계란이 깨지면
			t++;
		}
		func(cur + 1, cnt + t);
		v[cur].first += v[i].second;  // 초기화
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