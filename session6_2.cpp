#include <stdio.h>
int main(){

	for (int i = 0; i < 5; ++i)
	{
		printf("vong cua i - %d\n",i);
		for (int j = 0; j < 10; ++j)
		{
			printf("vong i=%d va j=%d\n",i,j );
			//break;
		}
	}

	return 0;
}