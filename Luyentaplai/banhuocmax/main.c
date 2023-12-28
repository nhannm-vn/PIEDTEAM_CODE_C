#include <stdio.h>
#include <stdlib.h>

//Nhập vào hai số. Tìm UCLN của chúng

int main()
{
    int a = 0;
    int b = 0;
    int uoc = 0;
    printf("\nInput a: ");
    scanf("%d", &a);
    printf("\nInput b: ");
    scanf("%d", &b);
    //TH1:
    if(a == 0 || b == 0){
        printf("\nUCLN cua hai so la: %d", abs(a - b));
    }
    //TH2:
    if(a != 0 && b != 0){
        do{
            if(a > b){
                a = a - b;// 16 7 9 2   2  5  3  1   1
            }else{
                b = b - a;
            }
        }while(a != b);
    }

    printf("\nUCLN cua hai so la: %d", a);




    return 0;
}
