#include <stdio.h>
#include <stdlib.h>
//Nhập vào số nguyên n
//In ra các ước số lẻ
//Tìm ước số lẻ lớn nhất
//Dạng max min thì phải gán số xong so sánh
int main()
{
    int n = 0;
    char ch;
    do{
        printf("\nInput n: ");
        scanf("%d", &n);
        scanf("%c", &ch);
        fflush(stdin);
        if(ch != 10 || n <= 0){
            printf("\nSai roi moi nhap lai");
            printf("\n");
        }
    }while(ch != 10 || n <= 0);

    int max = 1;
    printf("\nCac uoc so le la: ");
    for(int i = 1; i <= n; i++){
        if(n % i == 0 && i % 2 != 0){
            printf("%d ", i);
            if(i >= max){
                max = i;
            }
        }
    }
    printf("\nUoc so le lon nhat la: %d", max);

    return 0;
}
