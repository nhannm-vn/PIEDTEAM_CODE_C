#include <stdio.h>
#include <stdlib.h>
int strLen(char str[]);
int charInStr(char str[], char key);
char delCharInStr(char str[], int pos);
int insertCharInStr(char str[], char ch, int pos);
int insertStrIntoStr(char str[], char sub[], int pos);
int main()
{
    char str[100];
    printf("\nInput str:");
    gets(str);
    printf("\nstr ne:%s", str);

    char key;
    printf("\nNhap vao key: ");
    scanf("%c", &key);

    int side = charInStr(str, key);
    printf("\nVi tri: %d", side);
    return 0;
}
int insertCharInStr(char str[], char ch, int pos){
    int size = strLen(str);
    if(pos < 0 || pos > size){
        return 0;
    }
    for(int i = size - 1; i >= pos; i--){
        str[i+1] = str[i];
    }
    str[size + 1] = '\0';
    str[pos] = ch;
    return 1;
}

int insertStrIntoStr(char str[], char sub[], int pos){
    int size = strLen(str);
    int sizeSub = strLen(sub);
    if(pos < 0 || pos > size){
        return 0;
    }
    for(int i = size - 1; i >= pos; i--){
        str[i+sizeSub] = str[i];
    }
    for(int i = 0; i <= sizeSub - 1; i++){
        str[i+pos] = sub[i];
    }
    str[size + sizeSub] = '\0';
    return 1;
}

char delCharInStr(char str[], int pos){
    int size = strLen(str);
    if(pos < 0 || pos >= size){
        return '\0';
    }
    char ch = str[pos];
    for(int i = pos; i <= size - 2; i++){
        str[i] = str[i+1];
    }
    str[size - 1] = '\0';
    return ch;
}

int charInStr(char str[], char key){
    for(int i = 0; i <= strLen(str) - 1; i++){
        if(str[i] == key){
            return i;
        }
    }
    return -1;
}


int strLen(char str[]){
    int i = 0;
    while(str[i] != '\0') i++;
    return i;
}
/*
    charInStr(char str[], char ch): tìm ký tự ch
            nằm ở đâu trong chuỗi str
    delCharInStr(char str[], int pos): xóa pt ở vị
        trí thứ pos trong chuỗi str
    insertCharInStr(char str[], char ch, int pos):
        nhét ký tự ch vào vị trí pos trong str
    insertStrIntoStr(char str[], char sub[], int pos):
        nhét chuỗi sub vào str ở vị trí pos
*/
