#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int count=0;
	for(int i=2;i<n;i++){
		if(n%i==0){
			count++;
			break;
		}
	}
	if(count > 0){
		printf("Khong phai so nguyen to\n");
	}else{
		printf("La so nguyen to\n");
	}
	return 0;
}