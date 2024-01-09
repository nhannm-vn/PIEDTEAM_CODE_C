#include <stdio.h>
#include <stdlib.h>
/*
Cho người dùng nhập vào hai số a , b. Kiểm tra và in ra màn
hình ước chung của hai số đó.
Nếu a và b có dưới 2 ước chung thì lặp đến chết
*/
int main()
{
    int a = 0;
    int b = 0;

    while(1 == 1){
        printf("\nNhap vao a: ");
        scanf("%d", &a);

        printf("\nNhap vao b: ");
        scanf("%d", &b);

        printf("\nUoc chung: ");
        int sum = 0;
        for(int i = 1; i <= a; i++){
            if(a % i == 0 && b % i == 0){
                sum++;
                printf("%d ", i);
            }
        }

        if(sum >= 2)return;
        printf("\n");
    }




    return 0;
}
