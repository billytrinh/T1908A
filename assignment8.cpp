#include <stdio.h>

bool tim_so(int a[],int n,int x){
	for (int i = 0; i < n; ++i)
	{
		if(a[i] == x){
			return true;
		}
	}
	return false;
}
void in_cac_so_le(int a[],int n){
	for (int i = 0; i < n; ++i)
	{
		if(a[i]%2!=0){
			printf("So le %d\n",a[i]);
		}
	}
}

int tim_so_trong_day_fibo(int n){
	int x1=1,x2=1,x3=2;
	if(n<=0) {
		return 0;
	}
	if(n<3){
		return 1;
	}
	if(n == 3) return 2;
	for(int i=4;i<=n;i++){
		x1 = x2;
		x2 = x3;
		x3 = x1+x2;
	}
	return x3;
}

int main(){
	int a[6]= {3,1,5,7,8,9};
	int x = 10;
	if(tim_so(a,6,x)){
		printf("mang co chua so %d\n",x);
	}else{
		printf("Mang khong co so nay\n");
	}
	in_cac_so_le(a,6);
	int f = tim_so_trong_day_fibo(12);
	printf("so thu 12 trong day fibo: %d\n",f);
	return 0;
}