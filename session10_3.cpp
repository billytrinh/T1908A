#include <stdio.h>
#include <stdlib.h>

int main(){
	int *ary;
	//ary = (int *)malloc(5*sizeof(int));// tuong duong int ary[5]
	ary = (int *)calloc(5,sizeof(int));
	for (int i = 0; i < 5; ++i)
	{
		scanf("%d",ary+i);
	}
	for (int i = 0; i < 5; ++i)
	{
		printf("%3d\n",ary[i]);
	}

	ary = (int *)realloc(ary,10*sizeof(int));
	for (int i = 5; i < 10; ++i)
	{
		scanf("%d",ary+i);
	}
	for (int i = 0; i < 10; ++i)
	{
		printf("%3d\n",ary[i]);
	}

	free(ary);

	return 0;
}