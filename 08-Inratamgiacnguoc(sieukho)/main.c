#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Nhập vào số sao của một cạnh
    //* * * * *
    // *     *
    //  *   *
    //   * *
    //    *
    //So sao = So dong

    int n;
    printf("\nNhap vao so sao cua canh: ");
    scanf("%d", &n);

    //In ra cạnh đáy phía trên trước
    for(int i = 1; i <= n; i++){
        printf("* ");
    }
    printf("\n");//Nhảy xuống dòng tới bước in các sao lỏm

    for(int i = 1; i < n; i++){//Set up các dòng chứa sao trừ cạnh đáy
        for(int j = 1; j <= i; j++){//Set up thục vào đầu dòng
            printf(" ");
        }

        printf("*");//In ra sao đầu tiên bên tay trái
        if(i == n - 1){
            continue;
        }

        for(int k = n; k >= 2*i - 1; k--){//In ra space ở giữa sao lỏm
            printf(" ");
        }
        printf("*");

        printf("\n");
    }




    return 0;
}
