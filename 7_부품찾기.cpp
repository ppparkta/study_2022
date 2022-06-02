#include	<iostream>
#include	<vector>
#include	<algorithm>
using namespace std;

int banary(vector<int>& v, int ans, int start, int end)
{
	int mid = (start + end) / 2;
	if (start > end)
		return -1;
	if (v[mid] < ans)
		return banary(v, ans, mid + 1, end);
	else if (v[mid] > ans)
		return banary(v, ans, start, mid - 1);
	else
		return mid;
}

int main()
{
	int n, m, c;
	cin >> n;
	vector<int>v;
	vector<int>v2;
	for (int i = 0; i < n; i++)
	{
		cin >> m;
		v.push_back(m);
	}
	sort(v.begin(), v.end());
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> m;
		c = banary(v, m, 0, v.size()-1);
		if (c == -1)
		{
			if(i!=n-1)
				cout << "no" << " ";
			else
				cout << "no" << '\n';
		}
			
		else
		{
			if (i != n - 1)
				cout << "yes" << " ";
			else
				cout << "yes" << "\n";
		}
	}
	return 0;
}