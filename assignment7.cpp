#include <stdio.h>
int main(){
	int f = 1;
	while(f==1){
		int menu;
		do{
			printf("Chọn chức năng:\n");
			printf("1. Chọn món ăn\n");
			printf("2. Gọi đồ uống\n");
			printf("3. Thanh toán\n");
			printf("4. Thoát chương trình\n");
			scanf("%d",&menu);	
		}while(menu > 4 || menu < 1);
		
		if(menu == 1){
			int mon_an;
			do{
				printf("Chọn món ăn:\n");
				printf("1. Cơm gà\n");
				printf("2. Phở\n");
				printf("3. Bún\n");
				printf("4. Quay lại\n");
				scanf("%d",&mon_an);
			}while(mon_an > 4 || mon_an < 1);
			if(mon_an >=1 && mon_an <=3){
				printf("Cảm ơn đã chọn món.\n");
			}else{
				printf("Trở lại menu chức năng.\n");
			}
		}else if(menu == 2){
			int do_uong;
			do{
				printf("Chọn món ăn:\n");
				printf("1. Cafe\n");
				printf("2. Sinh tố\n");
				printf("3. Trà sữa\n");
				printf("4. Quay lại\n");
				scanf("%d",&do_uong);
			}while(do_uong > 4 || do_uong < 1);
			if(do_uong >=1 && do_uong <=3){
				printf("Cảm ơn đã chọn đồ uống.\n");
			}else{
				printf("Trở lại menu chức năng.\n");
			}
		}else if(menu == 3){
			printf("Số tiền cần thanh toán: 1000000\n");
			printf("Cảm ơn đã đến nhà hàng.\n");
		}else if(menu == 4){
			printf("Thoát chương trình....\n");
			f=0;
		}
	}

	return 0;
}