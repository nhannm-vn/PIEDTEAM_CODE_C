#include <stdio.h>
#include <stdlib.h>

//Số chính phương là số nếu
// căn 2 của một số được số nguyên thì đó là số chính phương

//Nhập vào 1 số nguyên (dương) n
//Kiểm tra xem n có phải chính phương hay không

//n=7 không phải
//0^2 1^2 2^2 3^2
//n=9 là số chính phương
//0^2 1^2 2^2 3^2

int main()
{
    //Điều kiện là một số nguyên dương hoàn chỉnh:

    int n;
    char ch;

    do{
        printf("\nBan hay nhap vao so di: ");
        scanf("%d", &n);
        scanf("%c", &ch);
        fflush(stdin);
        if(ch != 10 || n < 0){
            printf("\nNhap sai, moi nhap lai!!!");
            printf("\n");
        }
    }while(ch != 10 || n < 0);

    //Cách 1: căn bậc 2: float != int
    /*
    if(sqrt(n) == (int)sqrt(n)){
        printf("\nLa so chinh phuong do!!");
    }else{
        printf("\nKhong phai so chinh phuong :<");
    }
    */

    //Cách 2: 0^2  1^2  2^2  ... = số chính phương
    //Xét dãy bậc 2 nếu có số nào bằng thì chính là số chính phương
    // ví dụ 9 = 0^2  1^2  2^2  3^2

    for(int i = 0; i <= sqrt(n); i++){
        if(pow(i,2) == n){
            printf("\nLa so chinh phuong do!!!");
            return 0;
        }
    }
    printf("\nKhong la so chinh phuong dau :<");


    return 0;
}
