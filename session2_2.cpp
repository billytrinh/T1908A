#include <stdio.h>

int main(){
	int x,y,tong,thuong,sodu;
	scanf("%d",&x);
	scanf("%d",&y);

	tong = x + y;

	printf("tong = %d\n",tong);

	thuong = x/y;

	printf("thuong = %d\n", thuong);

	sodu = x%y;

	printf("So du = %d\n", sodu);
	return 0;
}