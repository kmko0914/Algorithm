#include <iostream>
using namespace std;

int n, m;
int arr[7];

void dfs(int a)
{
	if (a == m) {
		for (int i = 0; i < m; i++) {
			cout << arr[i] << " ";
		}
		cout << "\n";
		return;
	}

	for (int i = 1; i < n + 1; i++)
	{
		arr[a] = i;
		dfs(a + 1);
	}
}

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(0);
	cin >> n >> m;

	for (int i = 1; i < n + 1; i++)
	{
		arr[0] = i;
		dfs(1);
	}

	return 0;
}