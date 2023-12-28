#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Check Prime: count
    //Không cần khởi tạo lại count do chỉ check 1 số

    int n;
    printf("\nNhap vao so canh kiem tra: ");
    scanf("%d", &n);

    if(n >= 2){
        int count = 0;
        for(int i = 2; i <= n - 1; i++){
        if(n % i == 0){
            count++;
        }
        }
        if(count  == 0){
            printf("\n%d is prime", n);
        }else{
            printf("\n%d is not prime", n);
        }

    }else{
        printf("%d is not prime", n);
    }



    return 0;
}
