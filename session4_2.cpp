#include <stdio.h>

int main(){
	int S = 0;
	int i=1;
	while(i<=1000){
		if(i%2==1){
			S += i;
		}
		i++;
	}
	printf("S = %d\n",S);

	return 0;
}