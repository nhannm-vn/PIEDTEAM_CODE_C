#include <stdio.h>
#include <stdlib.h>
//3.trim
//  xóa khoảng cách thừa
//  f(str)
//  str = "   xin   chao    ban    "
//  ->str = " xin chao ban "
int strLen(char str[]);
void splice(char str[], int pos, int amount);
void trim(char str[]);
int main()
{
    char str[100] = "   xin   chao    ban    ";

    trim(str);
    printf("\nstr ne: ");
    printf("\n%s", str);
    return 0;
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

void splice(char str[], int pos, int amount){
    int size = strLen(str);
    for(int i = pos; i <= size - 1 - amount; i++){
        str[i] = str[i + amount];
    }
    amount = size - pos >= amount ? amount : size - pos;
    str[size - amount] = '\0';
}

int strLen(char str[]){
    int i = 0;
    while(str[i] != '\0') i++;
    return i;
}
