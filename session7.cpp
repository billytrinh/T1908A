#include <stdio.h>
int main(){
	int ary[9] = {4,2,5,7,3,9,1,-2,6};
	for (int i = 0; i < 8; ++i)
	{
		for (int j = 0; j < 9-i-1; ++j)
		{	
			if(ary[j] > ary[j+1]){
				printf("doi gia tri %d va %d\n",ary[j],ary[j+1]);
				int tmp = ary[j];
				ary[j] = ary[j+1];
				ary[j+1] = tmp;
			}
		}
		printf("Sau 1 vong:\n");
		for (int j = 0; j < 9; ++j)
		{
			printf("%d -- ",ary[j]);
		}
		printf("\n");
	}

//

	return 0;
}