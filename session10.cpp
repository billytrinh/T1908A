#include <stdio.h>
#include <iostream>

int main(){
	int x = 20;

	std::cout<< &x;

	int *p;
	p = &x;
	(*p)++;// x++
	//p++;
	printf("\nx = %d\n",*p);
	printf("x = %d\n",x);
	printf("\n");

	int ary[5] = {9,8,7,6,5};
	printf("ary[0] = %d\n",ary[0] );
	printf("ary[1] = %d\n",ary[1] );

	printf("ary[0] = %d\n",*(ary+0));
	printf("ary[1] = %d\n",*(ary+1));

	scanf("%d",&ary[0]);
	scanf("%d",&ary[1]);

	scanf("%d",(ary+0));
	scanf("%d",(ary+1));

	return 0;
}
