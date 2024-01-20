#include <stdio.h>
#include <stdlib.h>
/*
viết hàm nhập vào số nguyên n > 0 (có kiểm tra)
Tính tổng 1 + 1/2 + 1/3 + … + 1/n
Nếu nhập sai n thì return -1
*/
float inductiveSumNumber(void);
int main()
{
    printf("\nResult: %f", inductiveSumNumber());

    return 0;
}
float inductiveSumNumber(){
    int n = 0;
    char ch;
    do{
        printf("\nNhap vao n > 0: ");
        scanf("%d", &n);
        scanf("%c", &ch);
        fflush(stdin);
        if(ch != 10 || n <= 0){
            return -1;
        }
    }while(ch != 10 || n <= 0);
    float sum = 0;
    for(int i = 1; i <= n; i++){
        sum += (float)1/i;
    }
    return sum;
}