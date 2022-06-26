#include	<iostream>
using namespace std;

int arr[101];
int sum[101];

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	sum[0] = arr[0];
	sum[1] = max(arr[0], arr[1]);
	for (int i = 2; i < n; i++)
	{
		sum[i] = max(sum[i - 1], sum[i - 2] + arr[i]);
	}
	cout << sum[n - 1] << "\n";
	return 0;
}