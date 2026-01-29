#include <stdio.h>
int main ()
{
	int a,b;
	int tong=0;
	int hieu=0;
	int tich=1;
	float thuong;
	printf("Nhap a:  ");
	scanf("%d",&a);
	printf("Nhap b : ");
	scanf("%d",&b);
	tong=a+b;
	hieu=a-b;
	tich=a*b;
	thuong=(float)a/b;
	printf("\n Tong : %d ",tong);
	printf("\n Hieu : %d ",hieu);
	printf("\n Tich : %d",tich);
	printf("\n Thuong : %.2f ",thuong);
	return 0;
	}
	
	
