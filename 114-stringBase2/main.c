#include <stdio.h>
#include <stdlib.h>
int strLen(char str[]);
int charInStr(char str[], char ch);
char delCharInStr(char str[], int pos);
int insertStrIntoStr(char str[], char sub[], int pos);
int main()
{
    char str[100] = "xinChaoBan";
    //int pos = charInStr(str, 'C');
    //printf("\npos: %d", pos);
    insertStrIntoStr(str, "Cac", 7);
    printf("\nstr ne: %s", str);

    return 0;
}
int insertStrIntoStr(char str[], char sub[], int pos){
    int size = strLen(str);
    int sizeSub = strLen(sub);
    if(pos < 0 || pos > size){
        return 0;
    }
    for(int i = size - 1; i >= pos; i--){
        str[i + sizeSub] = str[i];
    }
    for(int i = 0; i <= sizeSub - 1; i++){
        str[i + pos] = sub[i];
    }
    str[size + sizeSub] = '\0';
    return 1;
}

int insertCharInStr(char str[], char ch, int pos){
    int size = strLen(str);
    if(pos < 0 || pos > size){
        return 0;
    }
    for(int i = size - 1; i >= pos; i--){
        str[i + 1] = str[i];
    }
    str[pos] = ch;
    str[size + 1] = '\0';
    return 1;
}

char delCharInStr(char str[], int pos){
    int size = strLen(str);
    if(pos < 0 || pos > size - 1){
         return '\0';
    }
    int ch = str[pos];
    for(int i = pos; i <= size - 2; i++){
        str[i] = str[i + 1];
    }
    str[size - 1] = '\0';
    return ch;
}

int charInStr(char str[], char ch){
    int size = strLen(str);
    for(int i = 0; i <= size - 1; i++){
        if(str[i] == ch){
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
