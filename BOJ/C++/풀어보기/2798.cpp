#include <iostream>
using namespace std;
int main()
{
	cin.tie(0);
	ios::sync_with_stdio(0);
	int a, b;
	int x = 0;
	int sum = 0;
	int arr[100];
	cin >> a >> b;
	for (int i = 0; i < a; i++)
		cin >> arr[i];
	for (int i = 0; i < a; i++)
	{
		for (int j = i + 1; j < a; j++)
		{
			for (int k = j + 1; k < a; k++)
			{
				sum = arr[i] + arr[j] + arr[k];
				if (x < sum)
				{
					if (sum < b)
					{
						x = sum;
					}
					else if (sum == b)
					{
						x = sum;
						i = a;
						break;
					}
				}
			}
		}
	}
	cout << x << "\n";
	return 0;
}