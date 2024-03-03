#include <stdio.h>
#include <stdlib.h>
int strLen(char str[]);
void splice(char str[], int pos, int amount);
int removeKey(char str[], char key);
int main()
{
    char str[100];
    printf("\nNhap vao str:");
    gets(str);
    char key;
    printf("\nNhap vao key: ");
    scanf("%c", &key);
    int amount = removeKey(str, key);
    if(amount == 0){
        printf("\namount ne: %d", amount);
        printf("\nKhong co key");
    }else{
        printf("\namount ne: %d", amount);
        printf("\nstr ne:%s", str);
    }
    return 0;
}
int removeKey(char str[], char key){
    int count = 0;
    for(int i = 0; i <= strLen(str) - 1; i++){
        if(str[i] == key){
            splice(str, i, 1);
            i--;
            count++;
        }
    }
    return count;
}

int strLen(char str[]){
    int i = 0;
    while(str[i] != '\0') i++;
    return i;
}

void splice(char str[], int pos, int amount){
    int size = strLen(str);
    for(int i = pos;  i<= size - 1 - amount; i++){
        str[i] = str[i + amount];
    }
    amount = size - pos >= amount ? amount : size - pos;
    str[size - amount] = '\0';
}
