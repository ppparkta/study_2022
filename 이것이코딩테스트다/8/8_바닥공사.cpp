#include	<iostream>
using namespace std;

int arr[1001];

int main()
{
	int x;
	cin >> x;
	arr[1] = 1;
	arr[2] = 3;
	for (int i = 3; i <= x; i++)
	{
		arr[i] = arr[i - 1] + arr[i - 2] * 2;
	}
	cout << arr[x] << "\n";
}