#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
"Viết hàm nhận vào str(1 chuỗi - string), hàm có
nhiệm vụ biến đổi str thành chuỗi đã được sắp xếp các từ theo chiều tăng
dần dựa trên bảng mã ascii, đảo ngược từng từ, và xóa các ký tự space thừa
--mô tả:
str: ""   Cuong  Binh   An Dung  ""
str sau khi xài hàm: ""nA hniB gnouC gnuD""
vd2:
str: "" ba   anh  dua   chay   ""
str sau khi xài hàm  ""hna ab yahc aud"""
*/
void splice(char str[], int pos, int amount);
void trim(char str[]);
void split(char str[], char key, char strList[][100], int *sizeL);
void join(char strList[][100], int sizeL, char key, char str[]);
void sort(char strList[][100], int sizeL);
void getString(char str[]);
int main()
{
    char str[100] = " ba   anh  dua   chay   ";
    getString(str);
    printf("\nstr ne:%s", str);

    return 0;
}

void getString(char str[]){
    trim(str);
    char strList[50][100];
    int sizeL = 0;
    split(str, ' ', strList, &sizeL);
    sort(strList, sizeL);
    for(int i = 0; i <= sizeL - 1; i++){
        strrev(strList[i]);
    }
    join(strList, sizeL, ' ', str);
}

void sort(char strList[][100], int sizeL){
    for(int i = 0; i <= sizeL - 2; i++){
        for(int j = i+1; j <= sizeL - 1; j++){
            if(strcmp(strList[i], strList[j]) == 1){
                char tmp[100];
                strcpy(tmp, strList[i]);
                strcpy(strList[i], strList[j]);
                strcpy(strList[j], tmp);
            }
        }
    }
}

void join(char strList[][100], int sizeL, char key, char str[]){
    str[0] = '\0';
    int size = strlen(str);
    char keyS[4] = "";
    keyS[0] = key;
    for(int i = 0; i <= sizeL - 1; i++){
        strcat(str, strList[i]);
        strcat(str, keyS);
    }
    str[size - 1] = '\0';
}

void split(char str[], char key, char strList[][100], int *sizeL){
    *sizeL = 0;
    trim(str);
    int size = strlen(str);
    int pos = 0;
    char tmp[100] = "";
    int sizeTmp = 0;
    while(pos <= size - 1){
        tmp[0] = '\0';
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

void trim(char str[]){
    for(int i = 0; i <= strlen(str) - 1; i++){
        if(str[i] == 32 && str[i+1] == 32){
            splice(str, i, 1);
            i--;
        }
    }
    if(str[0] == 32){
        splice(str, 0, 1);
    }
    if(str[strlen(str) - 1] == 32){
        splice(str, strlen(str) - 1, 1);
    }
}

void splice(char str[], int pos, int amount){
    int size = strlen(str);
    for(int i = pos; i <= size - 1 - amount; i++){
        str[i] = str[i+amount];
    }
    amount = size - pos >= amount ? amount : size - pos;
    str[size - amount] = '\0';
}
