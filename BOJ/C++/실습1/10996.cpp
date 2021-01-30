#include <iostream>
using namespace std;
int main()
{
	cin.tie(0);
	ios::sync_with_stdio(0);
	int a;
	cin >> a;
	if (a == 1)
		cout << "*";
	else
	{
		for (int i = 0; i < a * 2; i++)
		{
			if (i % 2 == 0)
			{
				for (int j = 0; j < a; j++)
				{
					if (j % 2 == 0)
						cout << "*";
					else
						cout << " ";
				}
				cout << "\n";
			}
			else
			{
				for (int j = 0; j < a; j++)
				{
					if (j % 2 == 0)
						cout << " ";
					else
						cout << "*";
				}
				cout << "\n";
			}
		}
	}
	return 0;
}