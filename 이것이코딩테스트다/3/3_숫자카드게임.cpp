#include	<iostream>
using namespace std;

int main()
{
	int n, m, ans;
	int arr[10001];
	int min[101];
	cin >> n >> m;
	for (int i = 1; i <= n * m; i++)
		cin >> arr[i];
	for (int i = 0; i < n; i++)
	{
		for (int j = 1; j < m; j++)
		{
			if (arr[(i * n) + j] < arr[(i * n) + j + 1])
				min[i + 1] = arr[(i * n) + j];
			else
				min[i + 1] = arr[(i * n) + j + 1];
		}
	}
	for (int i = 1; i < n; i++)
	{
		if (min[i] > min[i + 1])
			ans = min[i];
		else
			ans = min[i + 1];
	}
	cout << ans << endl;
	return 0;
}