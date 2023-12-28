#include <stdio.h>
#include <stdlib.h>

//Tìm chữ số lớn nhất

int main()
{
  int n;
    //Nhập vào một số nguyên dương:
    do{
        printf("\nNhap vao so nguyen duong n: ");
        scanf("%d", &n);
    }
    while(n < 0);

    //Tìm chữ số max:
    int tmp = n;
    int rye;
    int max = 1;

    //Thêm trường hợp người dùng nhập vào số 0:
    if(n == 0){
        printf("\nChu so lon nhat la: %d", n);
        return 0;
    }

    do{
      rye = tmp % 10;//Ra được chữ số cuối
      if(rye > max){
        max = rye;
      }
      tmp /= 10;
    }
    while(tmp != 0);

    printf("\nChu so lon nhat la: %d", max);

    return 0;
}
