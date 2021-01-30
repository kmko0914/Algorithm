#include <iostream>
using namespace std;
int main()
{
	cin.tie(0);
	ios::sync_with_stdio(0);
	int a, b;
	int min = 1000000;
	int max = -1000000;
	cin >> a;

	for (int i = 0; i < a; i++)
	{
		cin >> b;
		if (min > b)
			min = b;
		if (max < b)
			max = b;
	}
	cout << min << " " << max << "\n";
	return 0;
}