#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 0;
    int b = 0;
    printf("\nInput a: ");
    scanf("%d", &a);

    printf("\nInput b: ");
    scanf("%d", &b);

    if(a == 0 || b == 0){
        printf("\nUCLN: %d", abs(a-b));
    }else{
        while(a != b){
            if(a > b){
                a = a - b;
            }else{
                b = b - a;
            }
        }
        printf("\nUCLN: %d", a);
    }



    return 0;
}
