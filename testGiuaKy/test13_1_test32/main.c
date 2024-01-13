#include <stdio.h>
#include <stdlib.h>
/*
Cho người dùng nhập vào hai số a , b. Kiểm tra và in ra màn
hình ước chung của hai số đó.
Nếu a và b có dưới 2 ước chung thì lặp đến chết
*/

void checkUocChung();

int main()
{
    checkUocChung();

    return 0;
}
void checkUocChung(){
    while(1 == 1){
        int a = 0;
        int b = 0;
        int count = 0;
        printf("\nNhap vao a: ");
        scanf("%d", &a);
        printf("\nNhap vao b: ");
        scanf("%d", &b);

        for(int i = 1; i <= a; i++){
            if(a % i == 0 && b % i == 0){
                printf("%d ", i);
                count++;
            }
        }
        if(count >= 2){
            return 0;
        }
        count = 0;
    }
}
