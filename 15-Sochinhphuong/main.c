#include <stdio.h>
#include <stdlib.h>

//Số chính phương là số bằng bình phương đúng của một số nguyên.
//Hay hiểu đơn giản, số chính phương là một số tự nhiên có căn bậc hai cũng là một số tự nhiên.
//Hay hiểu đơn giản, số chính phương là một số tự nhiên có căn bậc hai cũng là một số tự nhiên
//Ví dụ sqrt(9) = 3;
int main()
{
    int n;
    printf("\nNhap vao so can kiem tra: ");
    scanf("%d", &n);

    //Check:
    int check;
    check = pow(sqrt(n),2);
    if(check == n){
        printf("\n%d la so chinh phuong", n);
    }else{
        printf("\n%d khong la so chinh phuong", n);
    }


    return 0;
}
