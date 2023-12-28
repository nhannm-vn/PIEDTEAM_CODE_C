#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("\nNhap vao so gia tri cua mang: ");
    scanf("%d", &n);

    int a[100];
    for(int i = 0; i < n; i++){
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    printf("\nCac so hoan hao trong mang la: ");
    int count = 0;
    for(int i = 0; i < n; i++){
        for(int j = 1; j < a[i]; j++){
            if(a[i] % j == 0){
                count += j;
            }
        }
        if(count == a[i]){
            printf("%d ", a[i]);
        }
        count = 0;
    }



    return 0;
}
