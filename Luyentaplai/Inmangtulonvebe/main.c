#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n;
    printf("\nNhap vao so phan tu cua mang: ");
    scanf("%d", &n);

    int a[100];
    for(int i = 0; i < n; i++){
        printf("a[%d] = ",i);
        scanf("%d", &a[i]);
    }

    //Sap xep tu lon ve be
    int tmp = 0;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] < a[j]){
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }

    printf("\nSap xep mang tu lon ve be la: \n");
    for(int i = 0; i < n; i++){
        printf("%d ",a[i]);
    }


    return 0;
}
