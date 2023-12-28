#include <stdio.h>
#include <stdlib.h>
/*
Tinh tong: 1 + 2 - 3 - 4 + 5 + 6 - 7 - 8 + 9 + 10-...-(n-2)-(n-1)+n+(n+1)
*/
int main()
{
    int n = 0;
    printf("\nInput n: ");
    scanf("%d", &n);

    int sum = 0;
    int signO = 1;
    int signE = 1;

    for(int i = 1; i <= n; i++){
        if(i % 2 == 0){
            sum += i*signE;//Nhét số xong rồi đổi chiều dấu của số tiếp theo
            signE = -signE;
        }else{
            sum += i*signO;
            signO = -signO;
        }
    }
    printf("\nTong cua day la: %d", sum);


    return 0;
}
