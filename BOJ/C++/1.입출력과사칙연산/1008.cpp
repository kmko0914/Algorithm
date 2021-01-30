#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	int a, b;
	cin >> a >> b;
	cout.precision(15);
	cout << (double)a / b << "\n";
	return 0;
}