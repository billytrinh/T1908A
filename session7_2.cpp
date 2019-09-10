#include <stdio.h>
int main(){
	int data[9] = {4,2,5,7,3,9,1,-2,6};
	int tmp,i,j;

	for (i=1; i<9; i++) {
	    j =  i - 1;
	    tmp = data[i];
	    printf("Xet vi tri cua so %d\n",tmp);
	    while ( (j>=0) && (tmp < data[j]) ) {
	        data[j+1] = data[j];
	        printf("so sanh voi so: %d\n",data[j]);
	        j--;    
	    }
	    data[j+1] = tmp;
	    printf("Sau 1 vong:\n");
	    for (int k=0; k < 9; ++k)
	    {
	    	printf("%d -- ",data[k]);
	    }
	    printf("\n");
	}

	return 0;
}