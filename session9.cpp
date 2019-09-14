#include <stdio.h>
#include <string.h>// phai them thu vien nay
int main(){
	char str1[20];
	char str2[20];	
	printf("Nhap chuoi 1\n");
	scanf("%s",str1);
	printf("Nhap chuoi 2\n");
	scanf("%s",str2);

	printf("Ket qua so sanh %d\n",strcmp(str1,str2));

	printf("vi tri cua h trong chuoi 1: %ld\n",(strchr(str1,'h')-str1) );

	strcat(str1,str2); // hieu tuong duong str1 = str1 + str2
	strcat(str2,str1);

	strcpy(str1,str2);//hieu tuong duong: str1 = str2
	printf("chuoi 1: %s\n",str1);
	printf("chuoi 2: %s\n",str2);

	printf("do dai chuoi 1: %ld\n",strlen(str1) );

	return 0;
}