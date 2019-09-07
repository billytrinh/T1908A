#include <stdio.h>
int main(){
	int x = 10;
	int ary[10];
	
	for (int i = 0; i < 10; ++i)
	{
		scanf("%d",&ary[i]);
	}

	int max = ary[0];
	for (int i = 0; i < 10; ++i)
	{
		if(ary[i]>max){
			max = ary[i];
		}
	}
	printf("So lon nhat: %d\n",max);

	int gmax;

	for (int i = 0; i < 10; ++i)
	{
		if(ary[i]<max){
			gmax = ary[i];
			break;
		}
	}

	for (int i = 0; i < 10; ++i)
	{	
		if(ary[i]>gmax && ary[i]<max){
			gmax = ary[i];
		}
	}
	printf("So gan lon nhat: %d\n",gmax);
	return 0;
}