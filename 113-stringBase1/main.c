#include <stdio.h>
#include <stdlib.h>
int strLen(char str[]);
void strCpy(char str[], char sub[]);
void strCat(char str[], char sub[]);
void strDiv(char str[], char sub[], int pos);
void strRev(char str[]);
int main()
{
    char str[100] = "xinChaoBan";
    char sub[100] = "abc";

    //xu li:
    //strCpy(str, sub);
    //strCat(str, sub);
    /*
    int pos = 0;
    printf("\nNhap vao pos: ");
    scanf("%d", &pos);
    strDiv(str, sub, pos);
    */
    strRev(str);
    //Ket qua:

    printf("\nstr ne: %s", str);
    printf("\nsub ne: %s", sub);
    return 0;
}
void strRev(char str[]){
    int size = strLen(str);
    for(int i = 0; i <= size/2 - 1; i++){
        char tmp = str[i];//luu y
        str[i] = str[size - 1 - i];
        str[size - 1 - i] = tmp;
    }
}

void strDiv(char str[], char sub[], int pos){
    sub[0] = '\0';
    int size = strLen(str);
    int sizeSub = strLen(sub);
    for(int i = pos; i <= size - 1; i++){
        sub[sizeSub] = str[i];
        sizeSub++;
    }
    str[pos] = '\0';
    sub[sizeSub] = '\0';
}

void strCat(char str[], char sub[]){
    int size = strLen(str);
    int sizeSub = strLen(sub);
    for(int i = 0; i <= sizeSub - 1; i++){
        str[size] = sub[i];
        size++;
    }
    str[size] = '\0';
}

void strCpy(char str[], char sub[]){
    str[0] = '\0';
    int size = strLen(str);
    int sizeSub = strLen(sub);
    for(int i = 0; i <= sizeSub - 1; i++){
        str[size] = sub[i];
        size++;
    }
    str[size] = '\0';
}

int strLen(char str[]){
    int i = 0;
    while(str[i] != '\0') i++;
    return i;
}

/*
strCpy(char str[], char sub[]): chuỗi str copy chuỗi sub

strCat(char str[], char sub[]): chuỗi str sẽ nối vào chuỗi kia

strDiv(char str[], char sub[], int pos): hàm sẽ chia mảng arr thành 2 khúc
ở vị trí pos khúc còn lại lưu vào sub

strRev(char str[]): đảo ngược chuỗi
*/
