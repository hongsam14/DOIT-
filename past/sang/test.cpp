#include <iostream>
#include <vector>


using namespace std;

int main(int argc, char** argv)
{
	long long  k, p, n;
	vector<long long> vec;

	scanf("%lld %lld %lld", &k, &p, &n);
	
	vec.push_back(k);
	for (long i = 0; i < 1000000007; i++)
	{
		k = k * p;
		if (k >= 1000000007)
			break;
		vec.push_back(k % 1000000007);
	}
	printf("%lld\n", vec[10 * n % 1000000007]);

	return 0;
}
