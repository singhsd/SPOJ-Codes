#include <stdio.h>

int main(void) {
	int t; long long int n; scanf("%d",&t);
	while(t--){
		scanf("%lld",&n);
		if(n%3==0) printf("Ragini\n");
		else printf("Hemlata\n");
	}
	return 0;
}