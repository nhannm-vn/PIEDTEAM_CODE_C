#include <stdio.h>
#include <stdlib.h>
//strUpr: uperCase
//      f(str)
//      str: 'f88 NhA Cai dEn tU chAu Au'
//           'F88 NHA CAI DEN TU CHAU AU'
int strLen(char str[]);
void strUpr(char str[]);
int main()
{
    char str[100] = "f88 NhA Cai dEn tU chAu Au";
    strUpr(str);
    printf("\nstr ne:%s", str);

    return 0;
}
void strUpr(char str[]){
    int size = strLen(str);
    for(int i = 0; i <= size - 1; i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            str[i] -= 32;
        }
    }
}

int strLen(char str[]){
    int i = 0;
    while(str[i] != '\0') i++;
    return i;
}
