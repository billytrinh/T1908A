#include <stdio.h>
int main(){
	int n,s=0;
	scanf("%d",&n);
	for ( ;n>0; )
	{
		s = s*10+n%10;
		n/=10;
	}
	printf("so nghich dao: %d\n",s);
	return 0;
}