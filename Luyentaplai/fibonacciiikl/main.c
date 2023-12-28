#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0;
    int prev = 0;
    int curr = 1;
    int result = 1;

    printf("\nInput site n: ");
    scanf("%d", &n);

    for(int i = 1; i <= n - 1; i++){
        result = prev + curr;
        prev = curr;
        curr = result;
    }

    printf("\nTai vi tri %d day co gt: %d", n, result);


    return 0;
}
