#include <stdio.h>

int main(){
	int x = 1000;
	int i=0;

	while(x<2000){
		x = x + x*8/100;
		i++;
		printf("x = %d\n",x);
	}
	printf("i = %d\n",i);
	printf("x = %d\n",x);
	return 0;
}