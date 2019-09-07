#include <stdio.h>
int main(){
	int x[10],s=0;
	for (int i = 0; i < 10; ++i)
	{
		scanf("%d",&x[i]);
	}
	
	for (int i = 0; i < 10; ++i)
	{
		s=0;
		for ( ;x[i]>0; )
		{
			s = s*10+x[i]%10;
			x[i]/=10;
		}
		printf("so nghich dao: %d\n",s);
	}

	
	
	return 0;
}