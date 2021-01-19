#include <iostream> 
#include <list>
#include <string>
using namespace std;

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(0);
	int n;
	string s;
	list<char> ls;
	list<char>::iterator it = ls.begin();
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> s;
		int len = s.length(), idx = 0;
		while (idx < len) {
			switch (s[idx]) {
			case '<':
				if (it != ls.begin())
					it--;
				break;
			case '>':
				if (it != ls.end())
					it++;
				break;
			case '-':
				if (!ls.empty() && it != ls.begin())
					ls.erase((--it)++);
				break;
			default:
				ls.insert(it, s[idx]);
				break;
			}
			idx++;
		}
		for (it = ls.begin(); it != ls.end(); it++)
			cout << *it;
		cout << '\n';
		ls.clear();
	}
	return 0;
}