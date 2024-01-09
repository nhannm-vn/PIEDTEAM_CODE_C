#include <stdio.h>
#include <stdlib.h>
/*
•	Viết chương trình nhận vào 1 số nguyên, tính tổng
tích các thành phần và in ra số đó dưới dạng đảo ngược ( 4p )
*/
int main()
{
    int n = 0;
    char ch;
    do{
        printf("\nNhap vao n: ");
        scanf("%d", &n);
        scanf("%c", &ch);
        fflush(stdin);
        if(ch != 10 || n < 0){
            printf("\nNhap lai di");
        }
    }while(ch != 10 || n < 0);

    int sum = 0;
    int mul = 1;
    int m = 0;
    int rye = 0;
    while(n != 0){
        rye = n % 10;
        sum += rye;
        mul *= rye;
        m = m * 10 + rye;
        n /= 10;
    }
    printf("tong: %d\ntich: %d\nreverse: %d", sum, mul, m);



    return 0;
}
