#include <stdio.h>
#include <stdlib.h>

//Nhập vào khoảng start đến end
//in ra các số nguyên tố
//tính tổng của chúng

int main()
{
    int start;
    int end;
    printf("\nInput start: ");
    scanf("%d", &start);

    printf("\nInput end: ");
    scanf("%d", &end);

    //Tráo đổi nhau:

    if(start > end){
        int tmp = 0;
        tmp = start;
        start = end;
        end =tmp;
    }

    printf("\nCac so nguyen to la: ");
    int sum = 0;
    for(int i = start; i <= end; i++){
        int isPrime = 1;
        if(i >= 2){//Loai so 1
            for(int j = 2; j <= i - 1; j++){
                if(i % j == 0){
                    isPrime = 0;
                    break;
                }
            }
            if(isPrime == 1){
                printf("%d ", i);
                sum = sum + i;
            }
        }
    }
    printf("\nTong cac so nguyen to trong day la: %d", sum);



    return 0;
}
