#include <iostream>
using namespace std;
int main()
{
	cin.tie(0);
	ios::sync_with_stdio(0);
	int a, b, c, num;
	cin >> a >> b >> c;
	if (a >= b)
	{
		if (a <= c)
			cout << a << "\n";
		else
		{
			if(b >= c)
				cout << b << "\n";
			else
				cout << c << "\n";
		}
	}
	else
	{
		if(b <= c)
			cout << b << "\n";
		else
		{
			if(a >= c)
				cout << a << "\n";
			else
				cout << c << "\n";
		}
	}
	return 0;
}