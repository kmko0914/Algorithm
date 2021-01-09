#include <iostream>
using namespace std;
int main()
{
	cin.tie(0);
	ios::sync_with_stdio(0);
	int a, b, num;
	int c = 0;
	int cycle = 0;

	cin >> a;
	num = a;
	do
	{
		b = a / 10 + a % 10;
		c = (a % 10) * 10 + b % 10;
		a = c;
		cycle++;
	} while (num != c);
	cout << cycle << "\n";
	return 0;
}