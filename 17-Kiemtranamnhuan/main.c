#include <stdio.h>
#include <stdlib.h>

//Kiểm tra xem có phải năm nhuận hay không:
//Năm nhuận là năm:
//Chia hết cho 4 nhưng không chia hết cho 100 hoặc
//Hoặc chia hết cho 400

int main()
{
    int n;
    printf("\nNhap vao nam cua kiem tra: ");
    scanf("%d", &n);

((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0)) ? printf("%d la nam nhuan", n) : printf("%d khong phai nam nhuan", n);



    return 0;
}
