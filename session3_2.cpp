#include <stdio.h>

int main(){
	int n =20;
	//scanf("%d",&n);

	if(n==1){
		printf("Goi mon an\n");
	}else if(n == 2){
		printf("Thanh toan\n");
	}else if(n == 3){
		printf("Goi do uong\n");
	}else if(n==4){
		printf("Don ban\n");
	}else{
		printf("Ra ve\n");
	}

	switch(n+2){
		case 1: printf("Goi mon an\n");break;
		case 2: printf("Thanh toan\n");break;
		case 3: printf("Goi do uong\n");break;
		case 4: printf("Don ban\n");break;
		default: printf("Ra ve\n");break;
	}

	return 0;
}