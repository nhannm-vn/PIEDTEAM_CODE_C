#include <stdio.h>
#include <stdlib.h>

//Nhập vào số nguyên n
//In ra các ước số lẻ
//Tìm ước số lẻ lớn nhất
//Dạng max min thì phải gán số xong so sánh

int main()
{
    int n;
    printf("\nNhap vao so n: ");
    scanf("%d", &n);

    int max = 1;//Gán ước lẻ lớn nhất là 1
    int i = 1;
    do{
        if((n % i == 0) && (i % 2 != 0)){
            if(i > max){
                max = i;
            }
        }
        i++;
    }
    while(i <= n);

    printf("\nUoc le lon nhat cua %d la: %d", n, max);


    return 0;
}
