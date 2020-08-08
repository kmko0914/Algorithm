#include <iostream>
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	int a, b;
	cin >> a >> b;
	if (b - 45 < 0)
	{
		if (a - 1 < 0)
		{
			b += 15;
			a = 23;
		}
		else
		{
			b += 15;
			a -= 1;
		}
	}
	else
		b -= 45;
	cout << a << " " << b << "\n";
	return 0;
}