#include <stdio.h>

int main(){
	float x = 1000;
	x = x + x*8/100;// sau 1 nam
	printf("Sau 1 nam: %f\n",x);
	x = x + x*8/100;// sau 2 nam
	printf("Sau 2 nam: %f\n",x);
	x = x + x*8/100;// sau 3 nam
	printf("Sau 3 nam: %f\n",x);
	x = x + x*8/100;// sau 4 nam
	printf("Sau 4 nam: %f\n",x);
	int tien;
	tien = (int)(x+3.11);
	printf("tien = %d\n", tien);
	return 0;
}