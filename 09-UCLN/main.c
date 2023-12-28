#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;

    printf("\nInput a: ");
    scanf("%d", &a);

    printf("\nInput b: ");
    scanf("%d", &b);


    //TH1: Nếu a or b là 0:
    if(a == 0 || b == 0){
        printf("\nUCLN cua a va b la: %d", abs(a-b));
    //TH2: Nếu a != 0 && b != 0
    }else if(a != 0 && b != 0){
        while(a != b){
            if(a > b){
                a = a - b;
            }else{
                b = b - a;
            }
        }
    }
    //Đây chỉ in ra a hoặc b là vì UCLN của 2 số khác nhau chỉ có thể là một số nhỏ hơn hoặc là 1
    //Nó sẽ thay phiên nhau trừ nhau trong vòng lặp vào các if else đến khi chúng bằng nhau
    printf("\nUCLN cua a va b la: %d", a);



    return 0;
}
