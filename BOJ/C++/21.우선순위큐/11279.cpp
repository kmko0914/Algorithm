#include <iostream>
#include <queue>
using namespace std;

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(0);
	
	int n, temp;
	priority_queue<int> pq;
	cin >> n;
	while(n--)
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