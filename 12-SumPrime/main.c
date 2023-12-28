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

    //Điều kiện để cho khoảng đúng:
    if(start > end){
        int tmp;
        tmp = start;
        start = end;
        end = tmp;
    }

    //Tính tổng các số nguyên tố trong khoảng:
    int sum = 0;
    for(int i = start; i <= end; i++){
        int count = 1;//Để điều kiên reset lại
        if(i >= 2){
            for(int j = 2; j <= i - 1; j++){
                if(i % j == 0){
                    count = 0;
                    break;
                }
            }
            if(count == 1){
                sum += i;
            }
        }
    }

    printf("\nTong cac so nguyen to tu start den end la: %d", sum);


    return 0;
}
