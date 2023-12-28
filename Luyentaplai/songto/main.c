#include <stdio.h>
#include <stdlib.h>
//Nhập vào một số nguyên n. Kiểm tra xem đó có phải là số nguyên tố hay không

int main()
{
    int n;
    printf("\nNhap vao so nguyen n: ");
    scanf("%d", &n);

    if(n >= 2){
      for(int i = 2; i <= n - 1; i++){
            if(n % 2 == 0){
                printf("\n%d is not prime", n);
                return 0;
            }
      }
      printf("\n%d is prime", n);
    }else{
      printf("\n%d is not prime", n);
    }


    return 0;
}
