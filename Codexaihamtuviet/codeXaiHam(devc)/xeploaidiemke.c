#include <stdio.h>
#include <stdlib.h>

//Khai bao ham xep loai diem:
void  xeploai(int diem)
{
	if(diem>=8)
	{
		printf("Day la hs gioi");
		return;
	} else if(diem>5)
	{
		printf("Day la hoc sinh kha");
		return;
	} else 
	{
		printf("Day la hoc sinh trung binh");
		return;
	}
}
int main(int argc, char *argv[]) {
	int diem;
	puts("Nhap vao so diem can kiem tra:");
	scanf("%d", &diem);
	xeploai(diem);
	return 0;
}
