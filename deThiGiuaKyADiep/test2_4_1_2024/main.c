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

int sumElement(int n);

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

    int result = sumElement(n);
    printf("\n%d", result);

    return 0;
}
int sumElement(int n){
    int rye = 0;
    int sum = 0;

    while(n != 0){
        rye = n % 10;
        sum += rye;
        n /= 10;
    }
    return sum;
}
