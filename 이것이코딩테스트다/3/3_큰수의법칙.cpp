#include	<iostream>
#include	<algorithm>
using namespace std;

int main()
{
	int n, m, k, cnt, ans;
	int arr[1001];

	cin >> n>>m>>k;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	sort(arr, arr + n);
	ans = cnt = 0;
	while (1)
	{
		for (int j = 0; j < k; j++)
		{
			ans += arr[n - 1];
			cnt++;
			if (cnt == m)
			{
				cout << ans << endl;
				return 0;
			}
		}
		ans += arr[n - 2];
		cnt++;
		if (cnt == m)
		{
			cout << ans << endl;
			return 0;
		}
	}
}