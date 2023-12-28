#include <stdio.h>
#include <stdlib.h>

//Nhập vào số nguyên n
//In ra các ước số lẻ
//Tìm ước số lẻ lớn nhất


int main()
{
    int n;
    printf("\nInput n: ");
    scanf("%d", &n);

    printf("\nCac uoc so le la: ");
    int max = 1;
    for(int i = 1; i <= n; i++){
        if(n % i == 0 && i % 2 != 0){
            printf("%d ", i);
            if(i >= max)
            max = i;
        }
    }
    printf("\nUoc so le lon nhat la: %d", max);



    return 0;
}
