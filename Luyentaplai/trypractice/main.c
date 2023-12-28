#include <stdio.h>
#include <stdlib.h>



int main()
{
    int n = 0;
    printf("\nInput n: ");
    scanf("%d", &n);

    int tich = 1;
    for(int i = 1; i <= n; i++){
        tich = tich * i;
    }
    printf("\nGia tri la: %d", tich);

    return 0;
}
