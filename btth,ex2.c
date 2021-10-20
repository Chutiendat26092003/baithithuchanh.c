#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,mang[10];
	for(i=0;i<10;i++)
	{
		printf("Nhap so thu %d: ",i+1);
		scanf("%d",&mang[i]);
	}
	printf("\nKet qua: ");
	for(i=9;i>=0;i--)
	{
		printf("%d, ",mang[i]);
	}
	
	printf("\nNhan ngay 20/10 chuc co va gia dinh manh khoe, hanh phuc, luon vui tuoi va co nhung tiet hoc hay truyen cam hung cho chung e a");
	printf("\nThank you so much  <3");
	return 0;
}
