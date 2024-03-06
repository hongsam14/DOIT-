#include <stdio.h>
#include <math.h>


int main(void)
{
	long p, n;
	long k;

	scanf("%ld %ld %ld", &k, &p, &n);


	for (long i = 0; i < 10*n ; i++){
		k = k * p;
		k = k % ((long)pow(10, 8) + 7);
		printf("k:%ld\n", k);
	} 
	
	printf("%ld", k);
	return 0;
}
