#include <iostream>
using namespace std;
int main()
{
	cin.tie(0);
	ios::sync_with_stdio(0);
	int arr[42] = { 0 };
	int a, num = 0;

	for (int i = 0; i < 10; i++)
	{
		cin >> a;
		arr[a % 42]++;
	}

	for(int i = 0; i < 42; i++)
	{
		if (arr[i] != 0)
			num++;
	}
	cout << num << "\n";

	return 0;
}