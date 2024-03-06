/**
 * 구간합
*/

#include <iostream>

using namespace std;

int	main(void)
{
	int n, m;
	int	tmp(0);
	int	*lst;
	int	*s_lst;

	scanf("%d %d", &n, &m);
	lst = new int[n];
	s_lst = new int[n + 1];
	s_lst[0] = 0;

	for (int i = 0; i < n; i++)
	{
		scanf(" %d", &tmp);
		lst[i] = tmp;
		s_lst[i + 1] = s_lst[i] + lst[i];
	}
	
	for (int i = 0; i < m; i++)
	{
		int s, e;
		scanf("%d %d", &s, &e);
		printf("%d\n", s_lst[e] - s_lst[s - 1]);
	}

	delete[] lst;
	delete[] s_lst;
	return 0;
}
