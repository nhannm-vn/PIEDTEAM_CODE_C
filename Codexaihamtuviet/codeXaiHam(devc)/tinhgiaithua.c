#include <stdio.h>
#include <stdlib.h>
//Tinh giai thua bang ham
long int Giaithua(int n)
{
	int i;
	long int tich=1;
	for(i=1; i<=n; i++)
	{
		tich=tich*i;
	}
	return tich;
}
int main() {
	int n;
	//Chuong trinh loai bo truong hop <=0
	while(n<=0)
	{
	printf("Nhap vao so can tim giai thua:");
	scanf("%d", &n);
	}
	
	printf("Giai thua cua %d la %d", n, Giaithua(n));
	
	
	
	
	return 0;
}
