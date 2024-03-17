#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void getAlphaBet(char str[]);
int main()
{
    char str[100] = "7hel5lo9_hihi";

    getAlphaBet(str);
    printf("\nstr ne:%s", str);
    return 0;
}
void getAlphaBet(char str[]){
    char sub[100] = "";
    int sizeSub = 0;
    for(int i = 0; i <= strlen(str) - 1; i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            sub[sizeSub] = str[i];
            sizeSub++;
        }
    }
    sub[sizeSub] = '\0';
    int size = 0;
    for(int i = 0; i <= sizeSub - 1; i++){
        str[size] = sub[i];
        size++;
    }
    str[size] = '\0';
}
//1.getAlphaBet(10p)
//  f(str)
//  str = "7hel5lo9_hihi"
//->str = "hellohihi"
