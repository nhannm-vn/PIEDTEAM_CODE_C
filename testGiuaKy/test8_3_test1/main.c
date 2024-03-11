#include <stdio.h>
#include <stdlib.h>
int splice(char str[], int pos, int amount);
int strLen(char str[]);
int main()
{
    char str[100];
    printf("\nNhap vao str:");
    gets(str);
    int pos = 0;
    printf("\nNhap vao pos: ");
    scanf("%d", &pos);
    int amount = 0;
    printf("\nNhap vao amount: ");
    scanf("%d", &amount);
    int tmp = splice(str, pos, amount);

    if(tmp == 0){
        printf("\nVi tri khong phu hop");
    }else{
        printf("\nstr ne:%s", str);
    }

    return 0;
}
int strLen(char str[]){
    int i = 0;
    while(str[i] != '\0') i++;
    return i;
}
int splice(char str[], int pos, int amount){
    int size = strLen(str);
    if(pos < 0 || pos >= size){
        return 0;
    }
    for(int i = pos; i <= size - 1; i++){
        str[i] = str[i+amount];
    }
    amount = size - pos >= amount ? amount : size - pos;
    str[size - amount] = '\0';
    return 1;
}
