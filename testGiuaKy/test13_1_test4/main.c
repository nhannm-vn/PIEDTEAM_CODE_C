#include <stdio.h>
#include <stdlib.h>

//5.Nhận vào số nguyên dương n, tính trung bình cộng của các chữ số trong n

float tbCong(int n);

int main()
{
    int n = 0;
    char ch;
    do{
        printf("\nNhap vao n: ");
        scanf("%d", &n);
        scanf("%c", &ch);
        fflush(stdin);
        if(ch != 10 || n < 0){
            printf("\nNhap lai di");
        }
    }while(ch != 10 || n < 0);

    printf("\nTrung binh cong cac chu so: %f", tbCong(n));
    return 0;
}
float tbCong(int n){
    int tmp = n;
    int sum = 0;
    int count = 0;
    int rye = 0;
    while(tmp != 0){
        rye = tmp % 10;
        sum += rye;
        count++;
        tmp /= 10;
    }
    return (float)sum/count;
}
