#include <iostream>
#include <math.h>
using namespace std;

int n;
int arr[15];
int c = 0;

bool check(int a)
{
	for (int i = 0; i < a; i++)
	{
		// 같은 열이거나 대각선에 있을 때 안됨
		if (arr[a] == arr[i] || a - i == abs(arr[a] - arr[i]))
			return false;
	}
	return true;
}

void nqueen(int idx)
{
	if (idx == n)
	{
		c++;
		return;
	}
	for (int i = 0; i < n; i++)
	{
		//idx번째 행, i번째 열에 queen 놓기
		arr[idx] = i;
		if (check(idx))
		{
			//다음 행에 queen을 놓는다
			nqueen(idx + 1);
		}
	}
}

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(0);
	cin >> n;
	nqueen(0);
	cout << c << "\n";
	return 0;
}