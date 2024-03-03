#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
//split
//      f(str, key, strList[])
//      hàm tách str thành nhiều mảng dựa trên key
//      "Diep 1999 10 SE", ' '
//      ["Diep", "1999", "10", "SE"]
*/
void split(char str[], char key, char strList[][100], int *sizeL);
void join(char strList[][100], int sizeL, char key, char str[]);
int main()
{
    char str[100] = "Diep 1999 10 SE";
    char strList[50][100];
    int sizeL = 0;
    split(str, ' ', strList, &sizeL);
    for(int i = 0; i <= sizeL - 1; i++){
        printf("\n(%s)", strList[i]);
    }
    join(strList, sizeL, '-', str);
    printf("\nstr ne:%s", str);
    return 0;
}
void join(char strList[][100], int sizeL, char key, char str[]){
    str[0] = '\0';
    char keyS[100] = "";
    keyS[0] = key;
    for(int i = 0; i <= sizeL - 1; i++){
        strcat(str, strList[i]);
        strcat(str, keyS);
    }
    str[strlen(str) - 1] = '\0';//vi thua 1 dau key
}

void split(char str[], char key, char strList[][100], int *sizeL){
    *sizeL = 0;
    int size = strlen(str);
    char tmp[100] = "";
    int sizeTmp = 0;
    int pos = 0;
    while(pos <= size - 1){
        tmp[0] = '\0';//khoi tao
        sizeTmp = strlen(tmp);
        for(int i = pos; i <= size - 1; i++){
            pos++;
            if(str[i] != key){
                tmp[sizeTmp] = str[i];
                sizeTmp++;
            }else break;
        }
        tmp[sizeTmp] = '\0';
        strcpy(strList[*sizeL], tmp);
        (*sizeL)++;
    }
}
