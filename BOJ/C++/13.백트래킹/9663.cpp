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
		// ���� ���̰ų� �밢���� ���� �� �ȵ�
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
		//idx��° ��, i��° ���� queen ����
		arr[idx] = i;
		if (check(idx))
		{
			//���� �࿡ queen�� ���´�
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