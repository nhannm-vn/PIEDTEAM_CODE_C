#include <stdio.h>
#include <stdlib.h>
//Lap phuong

int lapPhuong(int n){
    int lp = 0;
    lp = pow(n,3);
    return lp;
}


int main()
{
    int n = 0;
    printf("\nInput number: ");
    scanf("%d", &n);
    printf("\nLap phuong %d la : %d", n, lapPhuong(n));



    return 0;
}
