#include <iostream>
#include <vector>
using namespace std;


int DFS(int a, vector<vector<int>> *v)
{
	int count = 0;

	if ((*v)[a].size() == 0)
		return 1;
	for (int i = 0; i < (*v)[a].size(); i++)
		count += DFS((*v)[a][i], v);

	return count;
}

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(0);
	int n, temp, start, del;
	vector<vector<int>> p;
	vector<vector<int>> c;

	cin >> n;
	p.resize(n);
	c.resize(n);
	for(int i = 0; i < n; i++)
	{
		cin >> temp;
		if (temp == -1)
		{
			start = i;
			continue;
		}
		p[i].push_back(temp);
		c[temp].push_back(i);
	}
	cin >> del;
	if (p[del].size() == 0)
	{
		cout << 0 << '\n';
		return 0;
	}
	int pt = p[del][0];
	for (int i = 0; c[pt].size(); i++)
	{
		if (c[pt][i] == del)
		{
			c[pt].erase(c[pt].begin() + i);
			break;
		}
	}
	cout << DFS(start, &c) << '\n';
	return 0;
}