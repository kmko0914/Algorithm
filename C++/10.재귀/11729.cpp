#include <iostream>
#include <math.h>
using namespace std;

void Move(int num, char from, char by, char to)
{
	if (num == 1)
		cout << from << " " << to << "\n";
	else
	{
		Move(num - 1, from, to, by);
		cout << from << " " << to << "\n";
		Move(num - 1, by, from, to);
	}
}

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(0);
	int n;
	cin >> n;
	cout << (int)pow(2, n) - 1 << "\n";
	Move(n, '1', '2', '3');
	return 0;
}