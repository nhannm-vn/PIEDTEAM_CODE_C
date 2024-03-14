#include <stdio.h>
#include <stdlib.h>
int strLen(char str[]);
void strCpy(char str[], char sub[]);
void strCat(char str[], char sub[]);
void strRev(char str[]);
void strDiv(char str[], char sub[], int pos);
int main()
{
    char str[100];
    printf("\nNhap vao str:");
    gets(str);
    printf("str ne:%s", str);


    char sub[100];
    printf("\nNhap vao sub:");
    gets(sub);
    printf("sub ne:%s", sub);

    int pos = 0;
    printf("\nNhap vao pos: ");
    scanf("%d", &pos);

    strDiv(str, sub, pos);
    printf("\nstr sau xu li:%s", str);
    printf("\nsub sau xu li:%s", sub);
    return 0;
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

void strRev(char str[]){
    for(int i = 0; i <= strLen(str)/2 - 1; i++){
        char tmp = str[i];
        str[i] = str[strLen(str) - 1 - i];
        str[strLen(str) - 1 - i] = tmp;
    }
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
    int size = strLen(str);
    int sizeSub = strLen(sub);
    for(int i = 0; i <= sizeSub - 1; i++){
        str[i] = sub[i];
    }
    str[sizeSub] = '\0';
}

int strLen(char str[]){
    int i = 0;
    while(str[i] != '\0'){
        i++;
    }
    return i;
}
