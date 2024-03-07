#include <stdio.h>
#include <stdlib.h>
//viết hàm nhận vài str  và sub chèn sub vào str ở vị trí pos
int strLen(char str[]);
int insertSubInStr(char str[], char sub[], int pos);
int main()
{
    char str[100];
    printf("\nNhap vao str: ");
    gets(str);
    char sub[100];
    printf("\nNhap vao sub: ");
    gets(sub);
    int pos = 0;
    printf("\nNhap vao pos: ");
    scanf("%d", &pos);
    int tmp = insertSubInStr(str, sub, pos);
    if(tmp == 0){
        printf("\nVi tri khong hop li");
    }else{
        printf("\nstr ne:%s", str);
    }

    return 0;
}
int insertSubInStr(char str[], char sub[], int pos){
    int size = strLen(str);
    int sizeSub = strLen(sub);

    if(pos < 0 || pos > size){
        return 0;
    }
    for(int i = size - 1; i >= pos; i--){
        str[i+sizeSub] = str[i];
    }
    str[size + sizeSub] = '\0';
    for(int i = 0; i <= sizeSub - 1; i++){
        str[i+pos] = sub[i];
    }
    return 1;
}

int strLen(char str[]){
    int i = 0;
    while(str[i] != '\0') i++;
    return i;
}
