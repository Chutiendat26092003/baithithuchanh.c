#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int tong(int a,int b);
int hieu(int a,int b);
int tich(int a,int b);
float thuong(int a,int b);

int main(int argc, char *argv[]) {
	int a,b;
	int ch;
	printf("Nhap so thu nhat : ");
	scanf("%d",&a);
	printf("Nhap so thu 2 : ");
	scanf("%d",&b);
	printf("\tMENU\n");
	printf("1,tinh tong\n");
	printf("2,tinh toan tru\n");
	printf("3,tinh toan nhan (tich)\n");
	printf("4,tinh toan chia (thuong)\n");
	printf("5,thoat\n");
	printf("Ban muon thuc hien chuc nang so may ??  ");
	fflush(stdin);
	scanf("%d",&ch);
	switch(ch){
		case 1:
			printf("tong hai so la %d",tong(a,b));
			break;
		case 2:
			printf("hieu hai so la %d",hieu(a,b));
			break;
		case 3:
			printf("tich hai so la %d",tich(a,b));
			break;
		case 4:
			printf("thuong hai so (a/b) la %f",thuong(a,b));
		    break;
		case 5:
			printf("thoat.");
			break;
		default:
			printf("Vui long thu lai");
	}
	return 0;
}
int tong(int a,int b)
{
	return a+b;
}
int hieu(int a,int b)
{
	return a-b;
}
int tich(int a,int b)
{
	return a*b;
}
float thuong(int a,int b)
{
	return (float)a/b;
}
