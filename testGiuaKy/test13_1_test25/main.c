#include <stdio.h>
#include <stdlib.h>
/*
Tìm giá trị của dãy số 1 + 2 – 3 – 4 + 5 + 6 – 7 – 8 +
9 + 10 -….. – ( n – 2 ) – ( n – 1 ) + n + ( n + 1 ) ( 6p ) ( 0 ra có vào )
o	n = 7, sum = 0
o	n = 5, sum = 1

-	printf trước khi scanf phải in ra là “Nhap so n: ”
+ printf(“\nNhap so n: ”);
+ scanf(“%d”, &n);
-	kết quả in ra không cần ghi gì hết chỉ cần in ra số
+ printf(“\n%d”, result);
*/

void inductiveV1(int n);

int main()
{
    int n = 0;
    char ch;
    do{
        printf("\nNhap so n: ");
        scanf("%d", &n);
        scanf("%c", &ch);
        fflush(stdin);
        if(ch != 10){
            printf("\nNhap lai di");
        }
    }while(ch != 10);
    inductiveV1(n);


    return 0;
}
void inductiveV1(int n){
    int result = 0;
    int count = 0;
    int sign = 1;
    for(int i = 1; i <= n; i++){
        result += sign*i;
        count++;
        if(count == 2){
            sign = -sign;
            count = 0;
        }
    }
    printf("\n%d", result);
}