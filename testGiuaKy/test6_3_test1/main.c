#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//revWordInStr
//  f(str)
//  str: "xin chao ban" -> "ban chao xin"
void revWordInStr(char str[]);
int main()
{
    char str[100] = "nguyen minh nhan";
    revWordInStr(str);
    printf("\nstr ne:%s", str);
    return 0;
}
void revWordInStr(char str[]){
    strrev(str);
    int size = strlen(str);
    int pos = 0;
    char tmp[100] = "";
    int sizeTmp = 0;
    char result[100] = "";
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
    result[strlen(result) - 1] = '\0';
    strcpy(str, result);
}
