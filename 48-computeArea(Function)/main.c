#include <stdio.h>
#include <stdlib.h>
//Viết hàm nhận vào hai cạnh dài rộng
//Tính diện tích của hình chữ nhật
//Nếu là in thì là void

int computeArea(int height, int width);//Vì hàm kêu nhận vào nên là int và vì tính thì là return

int main()
{
    int h = 0;
    int w = 0;
    printf("\nInput height: ");
    scanf("%d", &h);

    printf("\nInput width: ");
    scanf("%d", &w);

    int s = computeArea(h, w);
    printf("\nDien tich la: %d", s);

    return 0;
}

int computeArea(int height, int width){
    int area = height * width;
    return area;
}
