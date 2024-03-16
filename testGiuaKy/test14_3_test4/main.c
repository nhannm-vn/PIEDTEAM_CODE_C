#include <stdio.h>
#include <stdlib.h>
void spliceStr(char str[], int pos, int amount);
void getAlphabet(char str[]);
int strLen(char str[]);
int main()
{
    char str[100] = "7hel5lo9_hihi";
    getAlphabet(str);
    printf("\nstr ne:%s", str);

    return 0;
}
int strLen(char str[]){
    int i = 0;
    while(str[i] != '\0') i++;
    return i;
}

void getAlphabet(char str[]){
    for(int i = 0; i <= strLen(str) - 1; i++){
        if(str[i] < 'a' || str[i] > 'z'){
            spliceStr(str, i, 1);
            i--;
        }
    }
}

void spliceStr(char str[], int pos, int amount){
    int size = strlen(str);
    if(pos < 0 || pos >= size){
        return 0;
    }
    for(int i = pos; i <= size - 1 - amount; i++){
        str[i] = str[i + amount];
    }
    amount = size - pos >= amount ? amount : size - pos;
    str[size - amount] = '\0';
    return 1;
}

//0.splice
//1.getAlphaBet(10p)
//  f(str)
//  str = "7hel5lo9_hihi"
//->str = "hellohihi"

//2.RemoveVowel
// f(str)
//  str = "xinChaoEm"
//  => str = "xnChm"

//3.trim
//  xóa khoảng cách thừa
//  f(str)
//  str = "   xin   chao    ban    "
//  ->str = " xin chao ban "
