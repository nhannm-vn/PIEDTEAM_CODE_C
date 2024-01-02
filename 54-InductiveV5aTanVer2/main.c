#include <stdio.h>
#include <stdlib.h>
//Tinh day 1 + 2 - 3 - 4 + 5 + 6 - 7 - 8

int main()
{
    int n = 0;
    int sum = 0;
    int dau = 1;
    int count = 0;
    printf("\nInput n: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        if(count == 2){
            dau = -dau;
            count = 0;
        }
        count++;
        sum += i*dau;
    }
    printf("\nTong day: %d", sum);


    return 0;
}
