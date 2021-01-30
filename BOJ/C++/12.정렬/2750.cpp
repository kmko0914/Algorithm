#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// C++ STL sort는 QuickSort로 O(nlogn)을 보장해준다고 합니다
int main()
{
	cin.tie(0);
	ios::sync_with_stdio(0);
	int n, temp;
	vector<int> v;
	cin >> n;
	while (n--)
	{
		cin >> temp;
		v.push_back(temp);
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << '\n';
	return 0;
}