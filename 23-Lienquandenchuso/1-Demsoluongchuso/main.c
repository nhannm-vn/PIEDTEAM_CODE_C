#include <stdio.h>
#include <stdlib.h>

//Nhập vào một chữ số nguyên dương
//Kiểm tra xem số đó có bao nhiêu chữ số

//How: lấy số đó chia cho 10
//Vì là số nguyên nên nó sẽ lấy tới chia = 0. Tới khi = 0 thì dừng

//KHI TA CHI MỘT SỐ NHỎ HƠN CHO SỐ LỚN HƠN THÌ SỐ DƯ CHÍNH LÀ SỐ NHỎ HƠN
//VD: 2 % 3 DƯ 2

int main()
{
    int n;
    do{
        printf("\nIput so n: ");
        scanf("%d", &n);
    }
    while(n < 0);

    int dem = 0;
    int themang = n;
    do{
        themang = themang / 10;
        dem ++;
    }
    while(themang != 0);

    printf("\nSo %d co tong cong %d chu so", n, dem);




    return 0;
}
