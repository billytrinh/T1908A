#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int ary[n];
	for(int i=0;i<n;i++){
		scanf("%d",&ary[i]);
	}
	for (int i = 0; i < n; ++i)
	{
		// bat dau kiem tra tung so trong mang
		int count = 0;
		for (int j = 2; j < ary[i]; ++j)
		{
			if(ary[i]%j==0){
				count++;
				break;
			}
		}
		if(count == 0){
			printf("so nguyen to: %d\n",ary[i]);
		}
		// kiem tra xong
	}

	

	return 0;
}