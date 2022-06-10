#include	<iostream>
using namespace std;

int main()
{
	int n, ans;
	cin >> n;
	ans = 0;
	ans += n / 500;
	n %= 500;
	ans += n / 100;
	n %= 100;
	ans += n / 50;
	n %= 50;
	ans += n / 10;
	cout << ans << endl;
	return 0;
}