#include <iostream>
#include <vector>
using namespace std;

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(0);
	int n, temp;
	vector<int> v;
	cin >> n;
	v.resize(10001);
	while (n--)
	{
		cin >> temp;
		v[temp]++;
	}
	for (int i = 0; i < v.size(); i++)
	{
		for(int j = 0; j < v[i]; j++)
			cout << i << '\n';
	}
	return 0;
}