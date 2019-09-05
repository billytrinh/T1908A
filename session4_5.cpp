#include <stdio.h>

int main(){
	char c;
	printf("Chọn Yes/No (y/n):\n");
	scanf("%c",&c);

	while(c!= 'y' && c != 'n'){
		printf("Chọn Yes/No (y/n):\n");
		scanf("%c",&c);
	}

	return  0;
}