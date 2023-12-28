#include <stdio.h>
#include <stdlib.h>
//Cho người dùng nhập vào nếu:
//đúng la 1a thì dừng lại không thì liên tục
int main()
{
    int number = 0;
    char ch;
    while(1 == 1){
        printf("\nInput so: ");
        scanf("%d", &number);
        scanf("%c", &ch);
        fflush(stdin);
        if(ch == 97 && number == 1){
            return 0;
        }
    }

    return 0;
}
