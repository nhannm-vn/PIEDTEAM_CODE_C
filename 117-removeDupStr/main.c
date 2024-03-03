#include <stdio.h>
#include <stdlib.h>
//removeDuplicate
int strLen(char str[]);
void splice(char str[], int pos, int amount);
int removeDuplicate(char str[]);
int main()
{
    char str[100];
    printf("\nNhap vao str: ");
    gets(str);

    int amount = removeDuplicate(str);
    if(amount == 0){
        printf("\namount ne: %d", amount);
        printf("\nMang khong co trung");
    }else{
        printf("\namount ne: %d", amount);
        printf("\nstr ne:%s", str);
    }


    return 0;
}
int removeDuplicate(char str[]){
    int count = 0;
    for(int i = 0; i <= strLen(str) - 2; i++){
        for(int j = i+1; j <= strLen(str) - 1; j++){
            if(str[i] == str[j]){
                splice(str, j, 1);
                j--;
                count++;
            }
        }
    }
    return count;
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
