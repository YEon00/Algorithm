#include <iostream>
#include <queue>
using namespace std;

int dx[] = {0,0,1,-1};
int dy[] = { 1,-1,0,0 };

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	char a[101][101];
	int check[101][101];
	int n, m;
	queue <pair<int, int>> q;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
			check[i][j] = 0;
		}
	}
	q.push(make_pair(0, 0));
	check[0][0] = 1;
	while (!q.empty()) {
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		for (int k = 0; k < 4; k++) {
			int nx = x + dx[k];
			int ny = y + dy[k];
			if (0 <= nx && nx < n && 0 <= ny && ny < m) {
				if (a[nx][ny] == '1' && check[nx][ny] == 0 ) {
					check[nx][ny] = check[x][y] + 1;
					q.push(make_pair(nx, ny));
				}
			}
		}
	}
	cout << check[n][m];
	//큰컵 포장용기 오뎅4박스 물 사이다콜라
	return 0;

}