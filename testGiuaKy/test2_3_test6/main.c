#include <stdio.h>
#include <stdlib.h>
/*
5. viết hàm nhận vào 1 string và 1 kí tự key. hàm xóa hết kí tự key trong mảng
*/
int strLen(char str[]);
int removeKey(char str[], char key);
void splice(char str[], int pos, int amount);
int main()
{
    char str[100];
    printf("\nNhap str: ");
    gets(str);

    char key;
    printf("\nNhap vao key: ");
    scanf("%c", &key);

    int amount = removeKey(str, key);
    if(amount == 0){
        printf("\namount = %d", amount);
        printf("\nKhong co key trong str");
    }else{
        printf("\namount = %d", amount);
        printf("\nstr ne: %s", str);
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
void splice(char str[], int pos, int amount){
    int size = strLen(str);
    for(int i = pos; i <= size - 1; i++){
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
