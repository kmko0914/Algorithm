#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(0);
	int n, temp;
	vector<int> v;
	cin >> n;
	while (n != 0)
	{
		v.push_back(n % 10);
		n = n / 10;
	}
	sort(v.begin(), v.end(), greater<int>());

	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i];
	}
	cout << '\n';
	return 0;
}