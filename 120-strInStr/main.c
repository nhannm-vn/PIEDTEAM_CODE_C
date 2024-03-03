#include <stdio.h>
#include <stdlib.h>
//strInStr
int strLen(char str[]);
int strInStr(char str[], char sub[]);
int main()
{
    char str[100];
    char sub[100];
    printf("\nNhap str:");
    gets(str);

    printf("\nNhap sub:");
    gets(sub);

    int tmp = strInStr(str, sub);
    if(tmp == -1){
        printf("\nKhong tim thay");
    }else{
        printf("\nvt: %d", tmp);
    }
    return 0;
}
int strInStr(char str[], char sub[]){
    int size = strLen(str);
    int sizeSub = strLen(sub);
    for(int i = 0; i <= size - 1; i++){
        if(str[i] == sub[0]){
            for(int j = 0; j <= sizeSub - 1; j++){
                if(str[i+j] != sub[j]){
                    break;
                }else{
                    if(j == sizeSub - 1){
                        return i;
                    }
                }
            }
        }
    }
    return -1;
}
int strLen(char str[]){
    int i = 0;
    while(str[i] != '\0') i++;
    return i;
}
