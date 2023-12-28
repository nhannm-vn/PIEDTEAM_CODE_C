#include <stdio.h>
#include <stdlib.h>
//Nhập vào một số nguyên đích thực
//Kiểm tra xem đó có phải là số nguyên tố hay không
//In kết quả ra màn hình
//Lặp đi lặp lại tới khi nào nhập vào số 0 thì dừng chương trình

int main()
{
    int number;
    char ch;
    do{
        printf("\nInput number: ");
        scanf("%d", &number);
        scanf("%c", &ch);
        fflush(stdin);
        if(ch != 10){//Neu khong chua \n chui roi bat nhap lai
            printf("\nSai roi. Moi nhap lai nao: ");
            printf("\n");
        }else{
            if(number >= 2){
                int isPrime = 1;
                for(int i = 2; i <= number - 1; i++){
                    if(number % i == 0){
                        isPrime = 0;
                        break;
                    }
                }
                if(isPrime){
                    printf("\n%d la so nguyen to do nhen!!!", number);
                }else{
                    printf("\n%d khong la so nguyen to dau!!", number);
                }
            }else{
                printf("\n%d khong la so nguyen to dau!!", number);
            }
        }
        printf("\n");

    }while(ch != 10 || number != 0);


    return 0;
}
