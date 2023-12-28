#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0;
    printf("\nInput vi tri n: ");
    scanf("%d", &n);

    int prev = 0;
    int curr = 1;
    int result = 1;

    for(int i = 1; i <= n - 1; i++){
        result = prev + curr;
        prev = curr;
        curr = result;
    }
    printf("\nTai vi tri %d co gia tri la: %d", n, result);

    return 0;
}
