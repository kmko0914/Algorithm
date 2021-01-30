#include <iostream>
#include <queue>
#include <math.h>
using namespace std;

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(0);

	struct cmp
	{
		bool operator()(int a, int b)
		{
			if (abs(a) == abs(b))
				return a > b;
			else
				return abs(a) > abs(b);
		}
	};

	int n, temp;
	priority_queue<int, vector<int>, cmp> pq;
	cin >> n;
	while (n--)
	{
		cin >> temp;
		if (temp != 0)
			pq.push(temp);
		else
		{
			if (pq.empty())
				cout << 0 << '\n';
			else
			{
				cout << pq.top() << '\n';
				pq.pop();
			}
		}
	}
	return 0;
}