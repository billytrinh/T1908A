#include <stdio.h>
int main(){
	int ary[5];
	int x;
	for (int i = 0; i < 5; ++i)
	{
		scanf("%d",ary+i);
	}
	printf("Nhap so x:\n");
	scanf("%d",&x);

	for (int i = 0; i < 5; ++i)
	{
		if(x == *(ary+i)){
			printf("x nam trong ary\n");
			break;	
		}
	}


	return 0;
}