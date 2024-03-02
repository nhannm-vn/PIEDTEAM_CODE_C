#include <stdio.h>
#include <stdlib.h>
/*
6. viết hàm nhận vào 1 str[] và 1 sub[].
hàm đếm xem có  bao nhiêu sub[] trong str và return số đó.
*/
int strLen(char str[]);
int strInStr(char str[], char sub[]);
int findSubInArr(char str[], char sub[]);
int splice(char str[], int pos, int amount);
int main()
{
    char str[100];
    printf("\nNhap str: ");
    gets(str);

    char sub[100];
    printf("\nNhap sub: ");
    gets(sub);

    int amount = findSubInArr(str, sub);
    if(amount == 0){
        printf("\n%d", amount);
        printf("\nKhong ton tai sub in str");
    }else{
        printf("\namount ne: %d", amount);
    }

    return 0;
}
int findSubInArr(char str[], char sub[]){
    int count = 0;
    while(1 == 1){
        int pos = strInStr(str, sub);
        if(pos == -1){
            break;
        }else{
            splice(str, pos, strLen(sub));
            count++;
        }
    }
    return count;
}
int splice(char str[], int pos, int amount){
    int size = strLen(str);
    if(pos < 0 || pos >= size){
        return 0;
    }
    for(int i = pos; i <= size - 1; i++){
        str[i] = str[i + amount];
    }
    amount = size - pos >= amount ? amount : size - pos;
    str[size - amount] = '\0';
    return 1;
}

int strInStr(char str[], char sub[]){
    int size = strLen(str);
    int sizeSub = strLen(sub);
    for(int i = 0; i <= size - 1; i++){
        if(str[i] == sub[0]){
            for(int j = 0; j <= sizeSub - 1; j++){
                if(str[i + j] != sub[j]){
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
