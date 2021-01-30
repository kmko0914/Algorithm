#include <iostream>
using namespace std;
int main()
{
	cin.tie(0);
	ios::sync_with_stdio(0);
	int a, i, b, c;
	int arr[5];
	for (i = 0; i < 5; i++)
	{
		cin >> a;
		arr[i] = a;
	}
	b = arr[0];
	c = arr[3];
	for (i = 1; i < 5; i++)
	{
		if (i < 3)
		{
			if (b > arr[i])
				b = arr[i];
		}
		else
		{
			if (c > arr[i])
				c = arr[i];
		}
	}

	cout << b + c - 50 << "\n";
	return 0;
}