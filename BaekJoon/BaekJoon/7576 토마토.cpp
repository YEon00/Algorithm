#include <iostream>
#include <queue>
using namespace std;

int a[1000][1000];
int check[1000][1000];
int dx[] = { 0,0,1,-1 };
int dy[] = { 1,-1,0,0 };

int main() {
	int n,m;
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin >> m >> n;
	queue <pair<int,int>> q;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
			check[i][j] = -1;
			if (a[i][j] == 1) {
				q.push(make_pair(i, j));
				check[i][j] = 0;
			}
		 }
	}
	while (!q.empty()) {
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		for (int k = 0; k < 4; k++) {
			int nx = x + dx[k];
			int ny = y + dy[k];
			if (0 <= nx && nx < n && 0 <= ny && ny < m) {
				if (a[nx][ny] == 0 && check[nx][ny] == -1) {
					check[nx][ny] = check[x][y] + 1;
					q.push(make_pair(nx, ny));
				}
			}
		}
		
	}
	int ans = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (ans < check[i][j]) {
				ans = check[i][j];
			}
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (a[i][j] == 0 && check[i][j] == -1) {
				ans = -1;
			}
		}
		
	}
	cout << ans << '\n';
	return 0;
	
}