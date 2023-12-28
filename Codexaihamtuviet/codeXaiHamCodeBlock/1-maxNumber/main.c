#include <stdio.h>
#include <stdlib.h>
//Input a, b, c. Tim gt max

int timMax(int a, int b, int c){
    int max = a;
    if(max < b){
        max = b;
    }
    if(max < c){
        max = c;
    }
    return max;

}

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;

    printf("\nInput a: ");
    scanf("%d", &a);

    printf("\nInput b: ");
    scanf("%d", &b);

    printf("\nInput c: ");
    scanf("%d", &c);

    printf("\nMax = %d", timMax(a, b, c));

    return 0;
}
