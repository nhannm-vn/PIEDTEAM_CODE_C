#include <stdio.h>
#include <stdlib.h>
/*
Nhập vào n( kiểm tra số nguyên dương từ 0 trở lên, chặn nhập sai), tính n giai thừa ( 3p )
*/
int main()
{
    int n = 0;
    char ch;
    do{
        printf("\nNhap vao n: ");
        scanf("%d", &n);
        scanf("%c", &ch);
        fflush(stdin);
        if(ch != 10 || n < 0){
            printf("\nNhap lai di");
        }
    }while(ch != 10 || n < 0);

    int mul = 1;
    for(int i = 1; i <= n; i++){
        mul *= i;
    }
    printf("\n%d! = %d", n, mul);

    return 0;
}
