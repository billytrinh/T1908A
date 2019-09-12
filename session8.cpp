#include <stdio.h>

int tinh_tong(int a,int b){
	int c;
	c= a+b;
	return c;
}

void in_ra_menu(){
	printf("Chọn chức năng:\n");
	printf("1. Chọn món ăn\n");
	printf("2. Gọi đồ uống\n");
	printf("3. Thanh toán\n");
	printf("4. Thoát chương trình\n");
}

bool kiem_tra_so_nguyen_to(int x){
	//int count = 0;
	for (int i = 2; i < x; ++i)
	{
		if(x%i==0){
			return false;
		}
	}
	
	return true;
}

int main(){
	in_ra_menu();
	int x = 10,y=20;
	int z = tinh_tong(x,y);
	printf("z = %d\n",tinh_tong(x,y));

	if(kiem_tra_so_nguyen_to(327)){
		printf("327 la so nguyen to\n");
	}else{
		printf("327 khong phai nguyen to\n");
	}


	in_ra_menu();

	 x++;

	in_ra_menu(); 

	return 0;
}