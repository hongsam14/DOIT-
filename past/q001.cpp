#include <iostream>

using namespace std;

int	main(void)
{
	char	*tmp;
	int	n(0);
	int	out(0);

	cin >> n;
	tmp = new char[n];

	cin >> tmp;
	for (int i = 0; i < n; i++)
	{
		out += (tmp[i] - '0');
	}
	delete[] tmp;
	cout << out << endl;
	
	return 0;
}
