#include <stdio.h>
#include <stdlib.h>
/*
4. viết hàm nhận vào 1 string, pos và kí tự key. hàm nhét key vào vị trí pos trong string
*/
int strLen(char str[]);
int insertKeyInStr(char str[], int pos, char key);
int main()
{
    char str[100];
    int pos = 0;
    char key;
    printf("\nNhap str: ");
    gets(str);

    printf("\nNhap vao pos: ");
    scanf("%d", &pos);
    fflush(stdin);
    printf("\nNhap vao key: ");
    scanf("%c", &key);

    int result = insertKeyInStr(str, pos, key);
    if(result == 0){
        printf("\nVi tri khong hop li");
    }else{
        printf("\nStr ne: %s", str);
    }
    return 0;
}
int insertKeyInStr(char str[], int pos, char key){
    int size = strLen(str);
    if(pos < 0 || pos > size){
        return 0;
    }
    for(int i = size - 1; i >= pos; i--){
        str[i + 1] = str[i];
    }
    str[size + 1] = '\0';
    str[pos] = key;
    return 1;
}

int strLen(char str[]){
    int i = 0;
    while(str[i] != '\0') i++;
    return i;
}
