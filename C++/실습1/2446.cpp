#include <iostream>
using namespace std;
int main()
{
	cin.tie(0);
	ios::sync_with_stdio(0);
	int a;
	cin >> a;
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < i; j++)
			cout << " ";
		for (int k = 2 * a - 1; k > i * 2; k--)
			cout << "*";
		cout << "\n";
	}
	for (int i = a - 1; i > 0; i--)
	{
		for (int j = i - 1; j > 0; j--)
			cout << " ";
		for (int k = (i - 1) * 2; k < 2 * a - 1; k++)
			cout << "*";
		cout << "\n";
	}
	return 0;
}