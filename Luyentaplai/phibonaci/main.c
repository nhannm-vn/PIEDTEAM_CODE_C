#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("\nInput vi tri n: ");
    scanf("%d", &n);

    //Setup step 1:
    int prev;
    int curr;
    int result;

    prev = 0;
    curr = 1;
    result = 1;

    //Skip step 1 do da setup buoc 1 /2: 1 1 1 /3: 2 1 2 /4: 3 2 3 /5: 5 3 5
    for(int i = 1; i <= n - 1; i++){
        result = prev + curr;
        prev = curr;
        curr = result;
    }

    printf("\ntai vi tri %d thi day co gia tri la: %d", n, result);



    return 0;
}
