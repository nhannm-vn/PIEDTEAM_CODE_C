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
    int  b = 0;
    char ch;
    char sh;

    int tmp = 0;
    int count =0;
    while(1 == 1){
        do{
            printf("\nInput a: ");
            scanf("%d", &a);
            scanf("%c", &ch);
            fflush(stdin);
            if(ch != 10){
                printf("\nInput again!");
                printf("\n");
            }
        }while(ch != 10);

        do{
            printf("\nInput b: ");
            scanf("%d", &b);
            scanf("%c", &sh);
            fflush(stdin);
            if(sh != 10){
                printf("\nInput again!");
                printf("\n");
            }
        }while(sh != 10);

        count = 0;//Reset Lai de dem
        printf("\nUoc chung la: ");
        for(int i = 1; i <= a; i++){
            if(a % i == 0 && b % i == 0){
                printf("%d ", i);
                count++;
            }
        }

        if(count >= 2){
            return 0;
        }
        printf("\n");

    }


    return 0;
}
