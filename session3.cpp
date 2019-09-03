#include <stdio.h>

int main(){
	int a,b,c;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);

	if(a > b && b > c){
		// a max c min
	}else if(a > c && c > b){
		// a max b min
	}else if(b > a && a > c){
		// b max c min
	}else if(b > c && c > a){
		// b max a min
	}else if(c > a && a > b){
		// c max b min
	}else{
		// c max a min
	}

	return 0;
}