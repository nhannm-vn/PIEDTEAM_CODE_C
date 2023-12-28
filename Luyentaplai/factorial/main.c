#include <stdio.h>
#include <stdlib.h>

//Nhập vào số nguyên n
//Tính giá trị thừa của n!
int main()
{
   int n;
   printf("\nNhap vo so nguyen n: ");
   scanf("%d", &n);

   int gt = 1;
   printf("%d! = ", n);
   for(int i = 1; i <= n; i++){
       printf("%d", i);
       if(i < n){
            printf(" * ");
       }
       gt *= i;
   }

   printf("\nGia tri la: %d", gt);

    return 0;
}
