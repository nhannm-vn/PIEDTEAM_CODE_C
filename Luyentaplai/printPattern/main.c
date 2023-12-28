#include <stdio.h>
#include <stdlib.h>

//Nhập vào chiều dài và chiều rộng dương
//In ra mảnh đất

int main()
{
    int height = 0;
    int width = 0;
    char ch;
    char sh;

    do{
        printf("\nInput height: ");
        scanf("%d", &height);
        scanf("%c", &ch);
        fflush(stdin);
        if(height <= 0 || ch != 10){
            printf("\nKhong phu hop. Moi nhap lai!!!");
            printf("\n");
        }
    }while(ch != 10 || height <= 0);

    do{
        printf("\nInput width: ");
        scanf("%d", &width);
        scanf("%c", &sh);
        fflush(stdin);
        if(width <= 0 || sh != 10){
            printf("\nKhong phu hop. Moi nhap lai!!!");
            printf("\n");
        }
    }while(sh != 10 || width <= 0);


    for(int j = 1; j <= width; j++){
            printf("*");//in ra 2 canh width
        }
        printf("\n");

    for(int i = 1; i <= height - 2; i++){//So dong = chieu rong
        printf("*");//sao dau tien o hang 2
        for(int k = 1; k <= width - 2; k++){
            printf(" ");
        }
        printf("*");//sao cuoi o hang 2
        printf("\n");
    }

    for(int j = 1; j <= width; j++){
            printf("*");//in ra 2 canh width
        }

    return 0;
}
