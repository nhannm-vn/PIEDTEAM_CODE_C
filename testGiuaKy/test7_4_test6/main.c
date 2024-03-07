#include <stdio.h>
#include <stdlib.h>
//nhập vào n không cần kiểm tra số nguyên tính tổng của dãy:
//1+2-3-4+5+6+..+n -7-8+9+10
int getInductive(int n);
int main()
{
    int n = 0;
    printf("\nNhap vao n: ");
    scanf("%d", &n);
    int result = getInductive(n);
    printf("\nket qua: %d", result);
    return 0;
}
int getInductive(int n){
    int count = 0;
    int sum = 0;
    int sign = 1;
    for(int i = 1; i <= n; i++){
        sum += i * sign;
        count++;
        if(count == 2){
            sign = -sign;
            count = 0;
        }
    }
    return sum;
}
