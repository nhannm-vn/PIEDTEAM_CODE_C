#include <stdio.h>
#include <stdlib.h>
/*
viết hàm nhập vào số nguyên n > 0 (có kiểm tra)
Tính tổng 1 + 1/2 + 1/3 + … + 1/n
Nếu nhập sai n thì return -1
*/
float inductiveResult(void);
int main()
{
    printf("ket qua: %f", inductiveResult());

    return 0;
}
float inductiveResult(void){
    int n = 0;
    char ch;

    printf("\nNhap vao n > 0: ");
    scanf("%d", &n);
    scanf("%c", &ch);
    fflush(stdin);
    if(ch != 10 || n <= 0){
        return -1;
    }
    float result = 0;
    for(int i = 1; i <= n; i++){
        result += (float)1/i;
    }
    return result;
}
