#include <stdio.h>
#include <stdlib.h>
/*
-    Viết hàm Nhập vào 1 số nguyên n . Có đầu ra số ở vị trí thứ n trong dãy Fibonanci ( 4p )

*/

int fibonacci(void);

int main()
{
    int tmp = fibonacci();
    printf("\nGia tri la: %d", tmp);



    return 0;
}

int fibonacci(void){
    int n = 0;
    char ch;
    do{
        printf("\nInput n: ");
        scanf("%d", &n);
        scanf("%c", &ch);
        fflush(stdin);
        if( ch != 10){
            printf("\nInput again");
            printf("\n");
        }
    }while(ch != 10);

    int prev = 0;
    int curr = 1;
    int result = 1;

    for(int i = 1; i <= n - 1; i++){
        result = prev + curr;
        prev = curr;
        curr = result;
    }
    return result;
}
