#include <stdio.h>
#include <stdlib.h>

//Nhập vào một số nguyên. Nếu số nguyên đó không thỏa mãn thì kêu người dùng nhập lại.
//Ví dụ:
// 9 ok
// 9.5 chửi và bắt nhập lại
// 9asds chửi và bắt nhập lại

int main()
{
    int number;
    char ch;//Này để chứa dấu enter

    do{
        printf("\nBan oi. Hay nhap vao mot con so di: ");
        scanf("%d", &number);//Nếu là con số nguyên thì sau nó sẽ là dấu enter
        scanf("%c", &ch);//Chứa dấu enter
        fflush(stdin);//Để xóa buffer. Xong xét lại con số khác buffer trống để xét số tiếp theo
        if(ch != 10){
            printf("\nDo you know Vietnamese?");
        }

    }while(ch != 10);//Do enter=10. Còn khác là còn chạy




    return 0;
}
