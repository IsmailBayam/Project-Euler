#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i;
  long long n;

	scanf("%lld",&n);
	
	for(i=2;n!=1;i++){
  	  	if(n%i==0){				  
        n/=i;
        printf("%d ",i);
        i--;
		}
	}
	return 0;
}
