//#include <iostream>
//#include <utility>
//#include <cstdio>
//#include <queue>
//#include <algorithm>
//using namespace std;
//
//int check[30][30];
//int dx[] = { 0,0,1,-1 };
//int dy[] = { 1,-1,0,0 };
//int a[30][30];
//queue <pair<int, int>> q;
//int n, cnt = 0;
//
//
//void dfs(int x, int y) {
//	cnt++;
//	check[x][y] = 1;
//	for (int i = 0; i < 4; i++) {
//		int nx = x + dx[i];
//		int ny = y + dy[i];
//		if (nx >= 0 && nx < n&&ny >= 0 && ny < n) {
//			if (a[nx][ny] == 1 && check[nx][ny] == 0) {
//				dfs(nx, ny);
//			}
//		}
//	}
//}
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			scanf("%1d", &a[i][j]);
//		}
//	}
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			if (a[i][j] == 1 && check[i][j] == 0) {
//				cnt = 0;
//				dfs(i, j);
//				q.push(make_pair(i, j));
//			}
//		}
//	}
//	sort()
//
//}
#pragma warning(disable : 4996)
#include <iostream>
#include <cstdio>
#include <algorithm>

const int dx[] = { 0,0,-1,1 };
const int dy[] = { -1,1,0,0 };
int n, k, cnt[26 * 26];
char a[26][26];

void dfs(int x, int y) {
	a[x][y] = '0';
	cnt[k]++;
	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (a[nx][ny] == '1') dfs(nx, ny);
	}
}

int main() {
	int i, j;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) 
		scanf("%s", a[i] + 1);

	for (i = 1; i <= n; i++) 
		for (j = 1; j <= n; j++)
			if (a[i][j] == '1') 
				dfs(i, j), k++;

	std::sort(cnt, cnt + k);
	printf("%d\n", k);
	for (i = 0; i < k; i++) 
		printf("%d\n", cnt[i]);

	return 0;
}