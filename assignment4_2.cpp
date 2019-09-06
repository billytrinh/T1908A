#include <stdio.h>

int main(){
	int a,b,c;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);

	while(!(a< b+c && b< a+c && c< a+b)){
		printf("Nhap lai 3 canh\n");
		scanf("%d",&a);
		scanf("%d",&b);
		scanf("%d",&c);
	}
	return 0;
}