#include <stdio.h>
#include <stdlib.h>

//Nhập vào một khoảng từ start đến end
//Tính tổng các số nguyên tố trong đó:
//Cần có 2 điều kiện quan trong:
//1: start < end
//2: dãy phải bắt đầu từ 2

int main()
{
    int start;
    int end;
    printf("\nInput start: ");
    scanf("%d", &start);

    printf("\nInput end: ");
    scanf("%d", &end);

    if(start > end){
       int tmp;
       tmp = start;
       start = end;
       end = tmp;
    }

    int sum = 0;
    printf("\nCac so nguyen to la: ");
    for(int number = start; number <= end; number++){
        int isprime = 1;
        if(number >= 2){
            for(int i = 2; i <= number - 1; i++){
                if(number % i == 0){
                    isprime = 0;
                    break;
                }
            }
            if(isprime == 1){
                printf("%d ", number);
                sum = sum + number;
            }
        }
    }

    printf("\nTong cac so nguyen to la: %d", sum);


    return 0;
}
