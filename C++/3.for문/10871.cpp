#include <iostream>
using namespace std;
int main()
{
	cin.tie(0);
	ios::sync_with_stdio(0);
	int a, b, c;
	int n = 0;
	int arr[10000];
	cin >> a >> b;
	for (int i = 0; i < a; i++)
	{
		cin >> c;
		if (c < b)
		{
			arr[n] = c;
			n++;
		}
	}
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << "\n";
	return 0;
}