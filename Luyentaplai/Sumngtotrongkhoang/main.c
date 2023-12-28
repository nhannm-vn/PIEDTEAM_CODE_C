#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Nhap mot khoang
    //In ra cac so nguyen to trong khoang do:

    int start;
    int end;

    printf("\nInput start: ");
    scanf("%d", &start);

    if(start >= 2){

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
    for(int i = start; i <= end; i++){
        int key = 1;
        for(int j = 2; j <= i - 1; j++){
            if(i % j == 0){
                key = 0;
            }
        }
        if(key){
            printf("%d ", i);
            sum = sum + i;
        }
    }
        printf("\nTong cac so nguyen to la: %d", sum);

    }else{
        printf("\nDay nhap vao khong dung");
    }



    return 0;
}
