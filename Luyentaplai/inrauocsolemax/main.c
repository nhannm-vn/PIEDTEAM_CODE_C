#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("\nInput n: ");
    scanf("%d", &n);

    printf("\nCac uoc so le la: ");
    for(int i = 1; i <= n; i++){
        if(n % i == 0 && i % 2 != 0){
            printf("%d ", i);
        }
    }
    //Uoc odd max:
    //Dau tien gan max la uoc le nho nhat
    //Sau do ss neu uoc lon hon thi doi lai

    /*Cach 1:
    int max = 1;//1 la uoc le nho nhat
    for(int i = 1; i <= n; i++){
        if(n % i == 0 && i % 2 != 0){
            if(i >= max){
                max = i;
            }
        }
    }
    printf("\nUoc le lon nhat la: %d", max);
    */
    int max = 1;
    int i = 1;
    do{
        if(n % i == 0 && i % 2 != 0){
            if(i >= max){
                max = i;
            }
        }
        i++;
    }
    while(i <= n);//Con dung con chay

    printf("\nUoc so le lon nhat la: %d", max);



    return 0;
}
