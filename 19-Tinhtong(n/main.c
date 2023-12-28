#include <stdio.h>
#include <stdlib.h>

//Nhập vào n:
//Tính tổng của 1/2 + 2/3 + 3/4 + n/n+1

int main()
{
  int n;
  do{
    printf("\nNhap vao n: ");
    scanf("%d", &n);
  }
  while(n < 1);

  float sum = 0;

  for(int i = 1; i <= n; i++){
    sum += (float)i/(i+1);
  }
  printf("\nGia tri cua tong la: %f", sum);


    return 0;
}
