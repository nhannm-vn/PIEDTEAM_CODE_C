#include <stdio.h>
#include <stdlib.h>
/*
Hàm nhận vào n ( số nguyên xịn ), return số fibonacci thứ n ( 4p )
Lưu ý
printf trước khi scanf phải in ra là “Nhap so n: ”
+ printf(“\nNhap so n: ”);
+ scanf(“%d”, &n);
kết quả in ra không cần ghi gì hết chỉ cần in ra số
+ printf(“\n%d, result ”);
*/

int fibonacci(int n);

int main()
{
    int n = 0;
    char ch;
    do{
        printf("\nNhap so n: ");
        scanf("%d", &n);
        scanf("%c", &ch);
        if(ch != 10){
            printf("\nNhap lai di");
        }
    }while(ch != 10);

    int result = fibonacci(n);
    printf("\n%d", result);

    return 0;
}
int fibonacci(int n){
    int prev = 0;
    int curr = 1;
    int result = 1;

    for(int i = 1; i <= n - 1; i++){
        result = prev + curr;
        prev = curr;
        curr = result;
    }

    return result;
}
