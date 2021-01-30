#include <iostream>
using namespace std;


int n, m;
int arr[9];
bool visited[9];

void dfs(int length)
{
	if (length == m) {
		for (int i = 0; i < m; i++) {
			cout << arr[i] << " ";
		}
		cout << "\n";
		return;
	}

	for (int i = 1; i < n + 1; i++)
	{
		if (visited[i])
			continue;
		visited[i] = true;
		arr[length] = i;
		dfs(length + 1);
		visited[i] = false;

	}
}

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(0);
	cin >> n >> m;

	for (int i = 1; i < n + 1; i++)
	{
		visited[i] = true;
		arr[0] = i;
		dfs(1);
		visited[i] = false;
	}

	return 0;
}