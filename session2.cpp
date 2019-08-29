#include <stdio.h>

int main(){
	int x;
	float y;
	double z;
	char h;
	int sinhvien;

	x = 12;
	y = 3.14;
	z = 12.22;
	h = 'b';

	sinhvien = x + 12 + 13;

	x = x + 4;

	sinhvien = x + 12 + 13;

	printf("Hello T1908A\n");
	printf("%d la so lon hon\n",x);
	printf("gia tri cua y = %f\n",y);
	printf("gia tri cua z = %lf\n",z);
	printf("gia tri cua h = %c\n",h);
	printf("gia tri sinh vien = %d\n",sinhvien);

	scanf("%d",&x);
	
	return 0;
}