#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int x1=1,x2=1,x3=2;
	//int i=4;
	// while(i<=n){
	// 	x1 = x2;//1- 2-3-5
	// 	x2 = x3;//2-3-5-8
	// 	x3 = x1+x2;//3-5-8-13
	// 	i++;
	// }

	for(int i=0,j=0;x1+x2<=n&&n>0;i+=j,j++){
		x1 = x2;//1- 2-3-5
		x2 = x3;//2-3-5-8
		x3 = x1+x2;//3-5-8-13
	}
	
	printf("so thu %d trong day: %d\n",n,x3);
	return 0;
}