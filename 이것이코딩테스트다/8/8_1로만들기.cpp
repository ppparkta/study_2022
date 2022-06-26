#include	<iostream>
using namespace std;

int arr[30001];

int main()
{
	int x;
	cin >> x;
	arr[2] = 1;
	if (x > 2)
	{
		for (int i = 3; i <= x; i++)
		{
			arr[i] = arr[i - 1] + 1;
			if (i % 2 == 0)
				arr[i] = min(arr[i], arr[i / 2] + 1);
			if (i % 3 == 0)
				arr[i] = min(arr[i], arr[i / 3] + 1);
			if (i % 5 == 0)
				arr[i] = min(arr[i], arr[i / 5] + 1);
		}
	}
	cout << arr[x] << "\n";
}