#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	while(n % 2 == 0){
		printf("Vui long nhap lai so le\n");
		scanf("%d",&n);
	}
	printf("So le vua nhap: %d\n",n);

	return 0;
}