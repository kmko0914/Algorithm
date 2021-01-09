#include <iostream>
using namespace std;
int main()
{
	cin.tie(0);
	ios::sync_with_stdio(0);
	int a;
	cin >> a;
	for (int i = 1; i < a + 1; i++)
	{
		for (int j = 0; j < i; j++)
			cout << "*";
		cout << "\n";
	}
	return 0;
}