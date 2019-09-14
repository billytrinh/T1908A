#include <stdio.h>
#include <string.h>

int main(){
	int ary[4][5];
	char s[20];

	printf("Nhap mang\n");
	scanf("%s",s);
	for (int i = (strlen(s)-1); i >=0 ; --i)
	{
		if(s[i]>=97 && s[i]<=122){
			printf("%c",s[i]-32);
		}else{
			printf("%c",s[i]);
		}
		
	}

	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			scanf("%d",&ary[i][j]);
		}

	}

	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			if(ary[i][j]%2!=0){
				printf("%3d",ary[i][j]);
			}
		}
		printf("\n");
	}

	char s2[4][20];

	for (int i = 0; i < 4; ++i)
	{
		scanf("%s",s2[i]);
	}

	printf("\n");
}