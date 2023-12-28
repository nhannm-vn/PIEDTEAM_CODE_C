#include <stdio.h>
#include <stdlib.h>
//Xoa phan tu tai vi tri trong mang
//n-- de khi thoa ra khoi ham thi n thay doi

//Xoa phan tu tai gia tri can co ham xoa phan tu tai vi tri

//XOA TAI VI TRI:
void xoamang(int a[], int n, int c) {
	int tem=0;
	int i;
	for(i=c; i<n; i++) {
		a[i]=a[i+1];
	}
	for(i=0; i<n-1; i++) {
		printf("\nMang sau khi xoa la:a[%d]= ", i);
		printf("%d ", a[i]);
	}

}

//XOA TAI GIA TRI:
void xoagt(int a[], int n, int q)
{
	int i;
	for(i=0; i<n; i++)
	{
		if(a[i]==q)
		{
			xoamang(a, n, i);
		}
	}
	printf("\nMang sau khi xoa tai gt la:\n");
	for(i=0; i<n; i++)
	{
		printf("%d", a[i]);
	}
}


int main() {

	int a[100];
	int n;
	do {
		printf("Nhap so luong toi da cua mang tu(0<n<=100):\n");
		scanf("%d", &n);
	} while(n<=0 || n>100);

	int i;
	printf("Nhap vao cac gia tri cua mang:\n");
	for(i=0; i<n; i++) {
		printf("a[%d]= ", i);
		scanf("%d", &a[i]);
	}
	int c;
	printf("Nhap vi tri trong mang can xoa:\n");
	scanf("%d", &c);
	xoamang(a,n,c);

    int q;
    printf("\nNhap vao gia tri can xoa:\n");
    scanf("%d", &q);
    xoagt(a,n,q);
	return 0;
}
