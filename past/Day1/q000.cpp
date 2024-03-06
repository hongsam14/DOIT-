#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int	main(void)
{
	int	n, i;
	vector<int>	tmp;
	
	cin >> n;
	while (n--)
	{
		cin >> i;
		tmp.push_back(i);
	}
	sort(tmp.begin(), tmp.end());
	for (vector<int> ::iterator i = tmp.begin(); i != tmp.end(); i++)
	{
		cout << *i << endl;
	}
	return 0;
}
