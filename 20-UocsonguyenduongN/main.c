#include <stdio.h>
#include <stdlib.h>
//Nhập vào số nguyên dương n
//+Liệt kê các ước của nó
//+Tính tổng các ước của nó
//+Tính tích của các ước
//+Đếm xem có bao nhiêu ước
//+Liệt kê các ước lẻ
//+Tính tích các ước lẻ
//+Tính tổng các ước chẵn
int main()
{
   int n;
   do{
    printf("\nNhap vao so nguyen (n>0): ");
    scanf("%d", &n);
   }
   while(n < 0);

   //In ra cac uoc va tong
   int sum  = 0;
   int tich = 1;
   int count = 0;
   printf("\nCac uoc cua no la: ");
   for(int i = 1; i <= n; i++){
    if(n % i == 0){
        printf("%d ", i);
        sum += i;
        tich *= i;
        count += 1;
    }
   }

   printf("\nTong cac uoc la: %d", sum);

   printf("\nTich cac uoc la: %d", tich);

   printf("\nCo tong cong %d uoc", count);

   //////////////////////////////////////
   printf("\n");
   tich = 1;
   sum = 0;
   count = 0;
   printf("\nCac uoc le la: ");
   for(int i = 1; i <= n; i++){
    if(n % i == 0){
        if(i % 2 != 0){
            printf("%2d", i);
            tich *= i;
        }else{
            sum += i;
            count++;
        }
    }
   }
   printf("\nTich cac uoc le la: %d", tich);
   printf("\nTong cac uoc chan la: %d", sum);
   printf("\nCo %d uoc chan cua so nguyen duong", count);

    return 0;
}
