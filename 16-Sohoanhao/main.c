#include <stdio.h>
#include <stdlib.h>

//Số hoàn hảo là số có tổng các ước bằng chính nó
//Ví dụ số 6: 1 + 2 + 3 = 6

int main()
{
    int n;
    printf("\nNhap vao so can kiem tra: ");
    scanf("%d", &n);

    int sum = 0;
    for(int i = 1; i <= n - 1; i++){
        if(n % i == 0){
            sum += i;
        }
    }

    if(sum == n){
        printf("\n%d la so hoan hao", n);
    }else{
        printf("\n%d khong la so hoan hao", n);
    }


    return 0;
}
