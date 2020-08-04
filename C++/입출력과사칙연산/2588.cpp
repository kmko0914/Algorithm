#include <iostream>
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	int a, b;
	cin >> a >> b;
	cout << a * (b % 10) << "\n";
	cout << a * (((b % 100) - (b % 10))/10) << "\n";
	cout << a * (b / 100) << "\n";
	cout << a * (b % 10) + 10 * (a * (((b % 100) - (b % 10)) / 10)) + 100 * (a * (b / 100)) << "\n";
	return 0;
}