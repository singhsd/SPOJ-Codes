#include <stdio.h>

int main(void) {
	long long int t,a,b;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld%lld",&a,&b);
		if(b==0)
		printf("Airborne wins.\n");
		else
		printf("Pagfloyd wins.\n");
	}
	return 0;
}