#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Nhập vào một số nguyên
    //Kiểm tra xem nó có phải là số nguyên tố hay không
    int n;
    printf("\nNhap vao mot so can kiem tra: ");
    scanf("%d", &n);

    //Vong lap kiem tra:
    if(n >= 2){
       for(int i = 2; i < n; i++){
        if(n % i == 0){
            printf("\n%d khong la so nguyen to", n);
            return 0;
        }
    }
           printf("\n%d la so nguyen to", n);
    }else{
       printf("\n%d khong la so nguyen to", n);
    }



    return 0;
}
