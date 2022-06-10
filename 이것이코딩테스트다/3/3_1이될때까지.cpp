#include	<iostream>
using namespace std;

int main()
{
	int n, k, cnt;
	cin >> n >> k;
	cnt = 0;
	while (n != 1)
	{
		if (n % k == 0)
		{
			cnt++;
			n /= k;
		}
		else
		{
			cnt++;
			n--;
		}
	}
	cout << cnt << endl;
	return 0;
}