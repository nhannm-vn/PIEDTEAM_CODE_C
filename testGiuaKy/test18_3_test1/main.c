#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//reword string
//"xin chao ban" ==> "ban chao xin"
int splice(char str[], int pos, int amount);
void trim(char str[]);
void reword(char str[]);
int main()
{
    char str[100] = "   xin chao ban  ";

    reword(str);
    printf("\nstr ne:%s", str);
    return 0;
}
void reword(char str[]){
    trim(str);
    char tmp[100] = "";
    int sizeTmp = 0;
    char result[100] = "";
    int pos = 0;
    int size = strlen(str);
    strrev(str);
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
        tmp[sizeTmp] = '\0';
        strrev(tmp);
        strcat(result, tmp);
        strcat(result, " ");
    }
    trim(result);
    strcpy(str, result);
}

void trim(char str[]){
    for(int i = 0; i <= strlen(str) - 1; i++){
        if(str[i] == 32){
            if(str[i+1] == 32){
                splice(str, i, 1);
                i--;
            }
        }
    }
    if(str[0] == 32){
        splice(str, 0, 1);
    }
    if(str[strlen(str)-1] == 32){
        splice(str, strlen(str) - 1, 1);
    }
}

int splice(char str[], int pos, int amount){
    int size = strlen(str);
    if(pos < 0 || pos >= size){
        return 0;
    }
    for(int i = pos; i <= size - 1 - amount; i++){
        str[i] = str[i+amount];
    }
    amount = size - pos >= amount ? amount : size - pos;
    str[size - amount] = '\0';
    return 1;
}