#include <iostream>

using namespace std;

int	main(void)
{
	int n(0);
	int	tmp(0);
	int	max(0);
	int	total(0);

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> tmp;
		if (tmp > max)
			max = tmp;
		total += tmp;
	}
	cout << (float)(total * 100 / max) / (float)n << endl;
	return 0;
}
