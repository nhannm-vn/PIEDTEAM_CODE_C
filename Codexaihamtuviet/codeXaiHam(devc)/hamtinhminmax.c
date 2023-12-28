#include <stdio.h>
#include <stdlib.h>
//Ham gt nho nhat
int GTNN( int a[], int n) {
	int i;
	int min;
	min=a[0];
	for(i=0; i<n; i++) {   
		if(min>a[i]) {
			min=a[i];
		}
	}
	return min;
}
//Ham gia tri lon nhat:
int GTLN(int a[], int n )
{
	int i; 
	int max;
	max=a[0];
	for(i=0; i<n; i++)
	{
		if(a[i]>max)
		max=a[i];
	}
	return max;
}
//Sap xep mang tang dan:

void sxm( int a[], int n)
{
	int i,j;
	int tem=0;
	for(i=0; i<n; i++)  
	{
		for(j=1+i; j<n; j++)
		{
			if(a[j]<a[i])   
			{
				tem=a[i];
				a[i]=a[j];
				a[j]=tem;
			}
		}
	}
	for(i=0; i<n; i++)
	{
		printf("%d ", a[i]);
	}
}


int main() {
	int n;
	int a[100];
	do {
		printf("Nhap vao gia tri toi da cua mang: ");
		scanf("%d", &n);
	} while(n<1 || n>100);
	int i;
	printf("Nhap vao cac gia tri cua mang:\n");
	for(i=0; i<n; i++) {
		printf("a[%d]= ", i);
		scanf("%d", &a[i]);
	}
	int min=GTNN(a, n);
	printf("Gia tri nho nhat cua mang la: %d", min);
    int max=GTLN(a, n);
    printf("\nGia tri lon nhat cua mang la: %d", max);
    printf("\nSap xep mang tu nho toi lon:\n");
    sxm(a, n);
	return 0;
}
