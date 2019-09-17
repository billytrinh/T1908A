#include <stdio.h>
#include <stdlib.h>
typedef struct sinhvien{
	char ten_sv[50];
	char ma_sv[20];
	int diem_thi;
}sv;
int main(){
	sv sv1;
	sv1.diem_thi = 10;
	scanf("%s",sv1.ten_sv);
	scanf("%s",sv1.ma_sv);
	printf("Thong tin sinh vien:\n");
	printf("ten sinh vien: %s\n",sv1.ten_sv);
	printf("Ma so sinh vien: %s\n",sv1.ma_sv );
	printf("Diem thi: %d\n", sv1.diem_thi);

	sv t1908a[3];
	printf("Nhap thong tin cac sinh vien:\n");
	for (int i = 0; i < 3; ++i)
	{
		scanf("%s",t1908a[i].ten_sv);
		scanf("%s",t1908a[i].ma_sv);
		scanf("%d",&t1908a[i].diem_thi);
	}

	for (int i = 0; i < 3; ++i)
	{	
		printf("-------------------------------\n");
		printf("ten sinh vien: %s\n",t1908a[i].ten_sv);
		printf("ma sinh vien: %s\n",t1908a[i].ma_sv);
		printf("diem thi: %d\n",t1908a[i].diem_thi);
	}

	sv *apt;
	apt = (sv *)malloc(3*sizeof(sv));
	printf("Nhap thong tin cac sinh vien:\n");
	for (int i = 0; i < 3; ++i)
	{
		scanf("%s",(apt+i)->ten_sv);
		scanf("%s",(apt+i)->ma_sv);
		scanf("%d",&((apt+i)->diem_thi));
	}
	printf("In ra thong tin:\n");
	for (int i = 0; i < 3; ++i)
	{
		printf("ten sinh vien: %s\n",(apt+i)->ten_sv);//apt[i].ten_sv
		printf("ma sinh vien: %s\n",(apt+i)->ma_sv);
		printf("diem thi: %d\n",(apt+i)->diem_thi);
	}

	return 0;
}