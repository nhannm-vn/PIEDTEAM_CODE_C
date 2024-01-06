#include <stdio.h>
#include <stdlib.h>
/*
/*
Viết chương trình nhận vào 1 số nguyên, tính tổng, tích các thành
phần và in ra số đó dưới dạng đảo ngược ( 4p ) ( 0 ra có vào )

-	printf trước khi scanf phải in ra là “Nhap so n: ”
+ printf(“\nNhap so n: ”);
+ scanf(“%d”, &n);
-	kết quả in ra không cần ghi gì hết chỉ cần in ra số
+ printf(“\n%d-%d-%d”, tong, tich, reverse);


*/

void reverNumber(int n);

int main()
{
    int n = 0;
    char ch;
    do{
        printf("\nNhap so n: ");
        scanf("%d", &n);
        scanf("%c", &ch);
        fflush(stdin);
        if(ch != 10){
            printf("\nNhap lai di");
        }
    }while(ch != 10);

    reverNumber(n);
    return 0;
}
void reverNumber(int n){
    int tmp = n;
    int rye = 0;
    int tong = 0;
    int tich = 1;
    int m = 0;
    while(tmp != 0){
        rye = tmp % 10;
        tong += rye;
        tich *= rye;
        m = m * 10 + rye;
        tmp /= 10;
    }
    printf("\n%d-%d-%d", tong, tich, m);
}
