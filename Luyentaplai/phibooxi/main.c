#include <stdio.h>
#include <stdlib.h>

//Hãy nhập vào một vị trí > 0
//In ra giá tị trong dãy fibonacci tại vị trí đó

int main()
{
    int n = 0;
    char ch;
    do{
        printf("\nHay nhap vao vi tri di: ");
        scanf("%d", &n);
        scanf("%c", &ch);
        fflush(stdin);
        if(n <= 0 || ch != 10){
            printf("\nNhap sai. Moi nhap lai!!");
        }
    }while(n <= 0 || ch != 10);

    int prev = 0;
    int curr = 1;
    int result = 1;

    for(int i = 1; i <= n - 1; i++){
        result = curr + prev;//Sau in ra giá trị rồi thì setup bước tiếp theo
        prev = curr;
        curr = result;
    }

    printf("\nTai vi tri %d thi co gia tri la: %d", n, result);


    return 0;
}
