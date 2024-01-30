#include <stdio.h>
#include <stdlib.h>
/*
viết hàm nhập vào số nguyên n > 0 (có kiểm tra)
Tính tổng 1 + 1/2 + 1/3 + … + 1/n
Nếu nhập sai n thì return -1
*/
float sumInductive(void);
int main()
{
    printf("\n%f", sumInductive());

    return 0;
}
float sumInductive(void){
    int n = 0;
    char ch;
    printf("\nNhap vao n: ");
    scanf("%d", &n);
    scanf("%c", &ch);
    fflush(stdin);
    if(ch != 10 || n <= 0){
        return -1;
    }
    float sum = 0;
    for(int i = 1; i <= n; i++){
        sum += (float)1/i;
    }
    return sum;
}
