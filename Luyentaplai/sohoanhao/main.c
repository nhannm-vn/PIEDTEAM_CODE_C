#include <stdio.h>
#include <stdlib.h>
//Nhập vào một số kiêm tra xem nó có phải số hoàn hảo không:
//Số hoàn hảo có tổng các ước bẳng chính nó: ví dụ 6 = 1 + 2 + 3
int main()
{
    int n;
    printf("\nNhap vao so can kiem tra: ");
    scanf("%d", &n);

    int count = 0;
    for(int i = 1; i < n; i++){
        if(n % i == 0){
            count += i;
        }
    }
    if(count == n){
        printf("\nSo %d la so hoan hao", n);
    }else{
        printf("\nSo %d khong la so hoan hao", n);
    }


    return 0;
}
