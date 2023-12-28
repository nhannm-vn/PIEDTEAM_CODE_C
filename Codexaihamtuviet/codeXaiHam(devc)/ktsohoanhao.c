#include <stdio.h>
#include <stdlib.h>
//In ra so hoan hao:
int Inrasohoanhao(int n)
{
	int i;
	int dem=0;
	for(i=1; i<n; i++)
	{
		if(n % i == 0)
		{
			dem=dem+i;
		}
	}
	if(dem==n)
	{
		return 1;
	} 
	return 0;
}

int main(int argc, char *argv[]) {
	
	int n;
	puts("Nhap vao so can kiem tra:");
	scanf("%d", &n);
	if(Inrasohoanhao(n)==1)
	{
		printf("Day la mot so hoan hao");
	}
	else
	{
		printf("Day khong la so hoan hao");
	}
	
	
	
	
	
	
	
	return 0;
}
