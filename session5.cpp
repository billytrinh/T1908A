#include <stdio.h>
int main(){
	int i=0;
	
	for (int i = 0; i < 10; ++i)
	{
		printf("%d hello\n",i);
		if(i>=3){
			//break;
			continue;
		}
		printf("loop\n");
	}

	return 0;
}