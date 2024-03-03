#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//revWordInStr
//  f(str)
//  str: "xin chao ban" -> "ban chao xin"
void splice(char str[], int pos, int amount);
void trim(char str[]);
void revWork(char str[]);
int main()
{
    char str[100] = "nguyen minh nhan";
    revWork(str);
    printf("\nstr ne:%s", str);
    return 0;
}
void revWork(char str[]){
    int pos = 0;//de chay
    char tmp[100] = "";//de chua tam/ chua toan \0
    int sizeTmp = 0;
    char result[100] = "";
    int size = strlen(str);
    strrev(str);//doi nguoc het
    while(pos <= size - 1){
        tmp[0] = '\0';
        sizeTmp = strlen(tmp);
        for(int i = pos; i <= size - 1; i++){
            pos++;
            if(str[i] != 32){
                tmp[sizeTmp] = str[i];
                sizeTmp++;
            }else break;
        }
        tmp[sizeTmp] = '\0';//ha ve
        strrev(tmp);
        strcat(result, tmp);
        strcat(result, " ");
    }
    trim(result);
    strcpy(str, result);
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
        str[i] = str[i + amount];
    }
    amount = size - pos >= amount ? amount : size - pos;
    str[size - amount] = '\0';
}
