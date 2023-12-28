#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    printf("\nInput a: ");
    scanf("%d", &a);

    printf("\nInput b: ");
    scanf("%d", &b);

    printf("\nInput c: ");
    scanf("%d", &c);

    if(a > b && a > c){
        printf("\na is max number");
    }else if(a == b && a > c){
        printf("\na and b are max number");
    }else if(a == c && a > b){
        printf("\na and c are max number");
    }else if(b > a && b > c){
        printf("\nb is max number");
    }else if(b == c && b > a){
        printf("\nb and c are max number");
    }else if(c > a && c > b){
        printf("\nc is max number");
    }else{
        printf("\n3 number are equal");
    }

    return 0;
}
