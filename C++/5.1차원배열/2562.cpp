#include <iostream>
using namespace std;
int main()
{
	cin.tie(0);
	ios::sync_with_stdio(0);
	int arr[10] = {0};
	int a, b, c, d;

	cin >> a >> b >> c;

	d = a * b * c;
	while (d != 0)
	{
		arr[d % 10]++;
		d = d / 10;
	}

	for (int i = 0; i < 10; i++)
		cout << arr[i] << "\n";

	return 0;
}