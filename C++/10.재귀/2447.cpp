#include <iostream>
#include <vector>
using namespace std;

vector<vector<char>> v;

void star(int n, int i, int j)
{
	if ((i / n) % 3 == 1 && (j / n) % 3 == 1)
	{
		v[i].insert(v[i].begin() + j, ' ');
		cout << v[i][j];
	}
	else
	{
		if (n / 3 == 0)
			cout << v[i][j];
		else
			star(n / 3, i, j);
	}
}

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(0);
	int n;
	cin >> n;
	vector<char> v2(n, '*');
	for (int i = 0; i < n; i++)
		v.push_back(v2);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			star(n, i, j);
		cout << '\n';
	}

	return 0;
}