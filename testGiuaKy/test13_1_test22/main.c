#include <stdio.h>
#include <stdlib.h>
/*
Viết hàm nhận vào n, tính tổng các chữ số của n ( 4p ) ( có ra có vào )
Lưu ý
-	printf trước khi scanf phải in ra là “Nhap so n: ”
+ printf(“\nNhap so n: ”);
+ scanf(“%d”, &n);
-	kết quả in ra không cần ghi gì hết chỉ cần in ra số
+ printf(“\n%d”, result);

*/

int sumElementNumber(int n);

int main()
{
    int n = 0;
    char ch;
    do{
        printf("\nNhap so n: ");
        scanf("%d", &n);
        scanf("%c", &ch);
        fflush(stdin);
        if(ch != 10 || n < 0){
            printf("\nNhap lai di!");
            printf("\n");
        }
    }while(ch != 10 || n < 0);

    int result = sumElementNumber(n);
    printf("\n%d", result);
    return 0;
}
int sumElementNumber(int n){
    int tmp = n;
    int rye = 0;
    int sum = 0;
    while(tmp != 0){
        rye = tmp % 10;
        sum += rye;
        tmp /= 10;
    }
    return sum;
}
