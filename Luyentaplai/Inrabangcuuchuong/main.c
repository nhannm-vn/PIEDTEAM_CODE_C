#include <stdio.h>
#include <stdlib.h>

int main()
{
    //In ra bang cuu chuong:
    int n;
    printf("\nNhap vao bang cuu chuong can in: ");
    scanf("%d", &n);

    printf("\nBang cuu chuong %d la: \n", n);
    for(int i = 1; i < 10; i++){
       printf("%d x %d = %d\n", n, i, n*i);
    }



    return 0;
}
