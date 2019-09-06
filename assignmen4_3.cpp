#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	while(n<2||n>8){
		printf("nhap lai\n");
		scanf("%d",&n);
	}

	return 0;
}