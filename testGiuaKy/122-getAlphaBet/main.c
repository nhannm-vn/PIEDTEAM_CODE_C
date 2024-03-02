#include <stdio.h>
#include <stdlib.h>
//1.getAlphaBet(10p)
//  f(str)
//  str = "7hel5lo9_hihi"
//->str = "hellohihi"
int strLen(char str[]);
void getAlphaBet(char str[]);
int main()
{
    char str[100] = "7hel5lo9_hihi";
    getAlphaBet(str);
    printf("\nstr ne: %s", str);

    return 0;
}
void getAlphaBet(char str[]){
    int size = strLen(str);
    char sub[100];
    sub[0] = '\0';
    int sizeSub = strLen(sub);
    for(int i = 0; i <= size - 1; i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            sub[sizeSub] = str[i];
            sizeSub++;
        }
    }
    sub[sizeSub] = '\0';
    str[0] = '\0';
    size = strLen(str);
    for(int i = 0; i <= sizeSub - 1; i++){
        str[size] = sub[i];
        size++;
    }
    str[size] = '\0';
}

int strLen(char str[]){
    int i = 0;
    while(str[i] != '\0') i++;
    return i;
}
