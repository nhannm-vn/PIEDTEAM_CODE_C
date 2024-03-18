#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//  str: " lE hO dIeP "  -> "Le Ho Diep"
int splice(char str[], int pos, int amount);
void trim(char str[]);
void validName(char str[]);
int main()
{
    char str[100] = " lE hO dIeP ";
    validName(str);
    printf("\nstr ne:%s", str);
    return 0;
}
void validName(char str[]){
    trim(str);
    strlwr(str);
    int size = strlen(str);
    for(int i = 0; i <= size - 1; i++){
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
