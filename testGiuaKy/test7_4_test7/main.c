#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//viết hàm nhận vào một chuỗi "xin chao ban" ==> "ban chao xin"
int strLen(char str[]);
void revWord(char str[]);
int main()
{
    char str[100] = "xin chao ban nhe";
    revWord(str);
    printf("\nstr ne:%s", str);
    return 0;
}
void revWord(char str[]){
    strrev(str);
    char tmp[100] = "";
    int sizeTmp = 0;
    char result[100] = "";
    int pos = 0;
    int size = strlen(str);
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

int strLen(char str[]){
    int i = 0;
    while(str[i] != '\0') i++;
    return i;
}
