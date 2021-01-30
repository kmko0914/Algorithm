#include <iostream>
using namespace std;

int fac(int n)
{
	if (n <= 1)
		return 1;
	else
		return n * fac(n - 1);
}

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(0);
	int n;
	cin >> n;
	cout << fac(n) << "\n";
	return 0;
}