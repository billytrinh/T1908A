#include <stdio.h>

// day la noi khai bao cac ham
int tim_so_nghich_dao(int x){
	int s=0;
	for (; x > 0;)
	{
		s = s*10+ x%10;
		x /=10;
	}
	return s;
}

int tim_so_lon_nhat(int a[],int n){
	int max = a[0];
	for (int i = 0; i < n; ++i)
	{
		if(max < a[i]){
			max = a[i];
		}
	}
	return max;
}

void mang_sau_khi_sap_xep(int a[],int n){
	for (int i = 0; i < n-1; ++i)
	{
		for (int j = 0; j < n-i-1; ++j)
		{
			if(a[j]> a[j+1]){
				int tmp = a[j];
				a[j] = a[j+1];
				a[j+1]= tmp;
			}
		}
	}

	for (int i = 0; i < n; ++i)
		{
			printf("%5d",a[i]);
		}	

}

int main(){
	int ary[10] = {1,3,2,4,1,4,6,7,4,13};
	int m = tim_so_lon_nhat(ary,10);
	mang_sau_khi_sap_xep(ary,10);
	// day la noi goi cac ham vao su dung
	int n = 1234;
	//int s = tim_so_nghich_dao(n);
	printf("so nghich dao: %d\n",tim_so_nghich_dao(n));
	return 0;
}