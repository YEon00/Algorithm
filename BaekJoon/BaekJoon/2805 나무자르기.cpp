//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main() {
//	long long n, m;
//	long long left = 1, right = 0, mid;
//	long long count, result=0;
//	vector <long long> v;
//	cin >> n >> m;
//	for (int i = 0; i < n; i++) {
//		int a; cin >> a;
//		v.push_back(a);
//		if (a > right)
//			right = a;
//	}
//	while (left <= right) {
//		count = 0;
//		mid = (left + right) / 2;
//		for (int i = 0; i < n; i++) {
//			if (v[i] > mid)
//				count += v[i] - mid;
//		}
//		if (count >= m) {
//			if (result < mid)
//				result = mid;
//			left = mid + 1;
//		}
//		else {
//			right = mid - 1;
//		}
//	}
//	cout << result << '\n';
//
//	return 0;
//}
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long long N, M, tmp;
	vector<long long> h;
	long long start = 1, end = 0;
	long long mid, result=0, sum;

	cin >> N >> M;

	for (int i = 0; i < N; i++)
	{
		cin >> tmp;
		h.push_back(tmp);
		if (end < tmp) end = tmp;
	}

	for (; start <= end; )
	{
		sum = 0;
		mid = (start + end) / 2;
		for (int i = 0; i < N; i++)
		{
			if (h[i] < mid) continue;
			else sum += h[i] - mid;
		}

		if (sum >= M)
		{
			result = mid;
			start = mid + 1;
		}
		else
		{
			end = mid - 1;
		}
	}

	cout << result;

	return 0;
}