#include <stdio.h>
#include <stdlib.h>
//Ham tinh lap phuong:

int lapphuong(int n)
{
	int tich=0;
	tich=n*n*n;
	
	return tich;
}


int main(int argc, char *argv[]) {
	
	int n;
	printf("Nhap vao so can tinh lap phuong:\n");
	scanf("%d", &n);
    printf("Gia tri lap phuong cua %d la: %d", n, lapphuong(n));
	
	
	return 0;
}
