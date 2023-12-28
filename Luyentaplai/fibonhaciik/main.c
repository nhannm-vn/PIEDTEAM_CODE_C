#include <stdio.h>
#include <stdlib.h>
//Nhập vào vị trí nguyên dương > 1 của dãy fibonaci và in ra giá trị tại vị trí đó


int main()
{
    int n = 0;
    char ch;
    int prev = 0;
    int curr = 1;
    int result = 1;

    do{
        printf("\nMoi nhap vao vi tri: ");
        scanf("%d", &n);
        scanf("%c", &ch);
        fflush(stdin);
        if(ch != 10 || n < 1){
            printf("\nMoi ban nhap lai!!!");
        }
    }while(ch != 10 || n < 1);

    for(int i = 1; i <= n - 1; i++){
        result = prev + curr;//Tinh roi setup buoc tiep theo
        prev = curr;
        curr = result;
    }
    printf("\nTai vi tri %d co gia tri la: %d", n, result);



    return 0;
}
