#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	int a;
	cin >> a;
	if ((a % 4 == 0 && a % 100 != 0) || a % 400 == 0)
		cout << "1" << "\n";
	else
		cout << "0" << "\n";
	return 0;
}