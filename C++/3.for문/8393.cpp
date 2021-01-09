#include <iostream>
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	int a, b;
	cin >> a;
	b = a;
	for (int i = 0; i < a; i++)
		b += i;
	cout << b << "\n";
	return 0;
}