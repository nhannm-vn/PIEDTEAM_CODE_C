#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//nhập vào một chuỗi ví dụ "  lE   hO   dIEP   nhan mInH" ==> "Le Ho Diep"
int splice(char str[], int pos, int amount);
int strLen(char str[]);
void trim(char str[]);
void validName(char str[]);
int main()
{
    char str[100] = "  lE   hO   dIEP   nhan minH   ";
    validName(str);
    printf("\nstr ne:%s", str);

    return 0;
}
void validName(char str[]){
    trim(str);
    strlwr(str);
    for(int i = 0; i <= strLen(str) - 1; i++){
        if(str[i] == 32){
            if(str[i+1] >= 'a' && str[i+1] <= 'z'){
                str[i+1] -= 32;
            }
        }
    }
    if(str[0] >= 'a' && str[0] <= 'z'){
        str[0] -= 32;
    }
}
void trim(char str[]){
    for(int i = 0; i <= strLen(str) - 1; i++){
        if(str[i] == 32 && str[i+1] == 32){
            splice(str, i, 1);
            i--;
        }
    }
    if(str[0] == 32){
        splice(str, 0, 1);
    }
    if(str[strLen(str) - 1] == 32){
        splice(str, strLen(str) - 1, 1);
    }
}
int splice(char str[], int pos, int amount){
    int size = strLen(str);
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
int strLen(char str[]){
    int i = 0;
    while(str[i] != '\0') i++;
    return i;
}
