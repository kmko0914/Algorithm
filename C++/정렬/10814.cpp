#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

class judge {
public:
	int age;
	string name;
	int join;
};

bool cmp(judge a, judge b)
{
	if (a.age < b.age)
		return true;
	else if (a.age == b.age)
		return a.join < b.join;
	else
		return false;
}

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(0);
	int n;
	cin >> n;
	vector<judge> v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i].age >> v[i].name;
		v[i].join = i;
	}
	sort(v.begin(), v.end(), cmp);
	for (int i = 0; i < v.size(); i++)
		cout << v[i].age << ' ' << v[i].name << '\n';

	return 0;
}