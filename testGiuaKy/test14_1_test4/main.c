#include <stdio.h>
#include <stdlib.h>
//Nhập vào số nguyên n
//In ra các ước số lẻ
//Tìm ước số lẻ lớn nhất

int main()
{
    int n = 0;
    char ch;
    do{
        printf("\nNhap vaoo n: ");
        scanf("%d", &n);
        scanf("%c", &ch);
        fflush(stdin);
        if(ch != 10){
            printf("\nNhap lai di");
        }
    }while(ch != 10);
    int max = 1;
    printf("\nCac uoc so le: ");
    for(int i = 1; i <= n; i++){
        if(n % i == 0 && i % 2 != 0){
            printf("%d ", i);
            if(max < i){
                max = i;
            }
        }
    }
    printf("\nUoc so le lon nhat: %d", max);

    return 0;
}
