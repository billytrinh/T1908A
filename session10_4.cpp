#include <stdio.h>
#include <stdlib.h>

int main(){
	int *ary,n;
	scanf("%d",&n);
	ary = (int *)malloc(n*sizeof(int));
	printf("Nhap mang:\n");
	for (int i = 0; i < n; ++i)
	{
		scanf("%d",ary+i);
	}
	int max = *(ary+0);
	for (int i = 0; i < n; ++i)
	{
		if(max < *(ary+i)){
			max = *(ary+i);
		}
	}
	printf("So lon nhat: %d\n",max);

	ary = (int *)realloc(ary,n*2*sizeof(int));

	printf("Nhap them so:\n");
	for (int i = n; i < n*2; ++i)
	{
		scanf("%d",ary+i);
	}
	max = *(ary+0);
	for (int i = 0; i < 2*n; ++i)
	{
		if(max < *(ary+i)){
			max = *(ary+i);
		}
	}
	printf("So lon nhat: %d\n",max);	

	return 0;
}