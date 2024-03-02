#include <stdio.h>
#include <stdlib.h>
//2.RemoveVowel
// f(str)
//  str = "xinChaoEm"
//  => str = "xnChm"
int strLen(char str[]);
void splice(char str[], int pos, int amount);
void removeVowel(char str[]);
int main()
{
    char str[100] = "xinChaoEm";
    removeVowel(str);
    printf("\nstr ne: %s", str);
    return 0;
}
void removeVowel(char str[]){
    for(int i = 0; i <= strLen(str) - 1; i++){
        if(str[i] == 'a' || str[i] == 'o' || str[i] == 'i' || str[i] == 'u' || str[i] == 'e'
        || str[i] == 'A' || str[i] == 'O' || str[i] == 'I' || str[i] == 'U' || str[i] == 'E'){
            splice(str, i, 1);
            i--;//vi co lui nen strLen bo trong for
        }
    }
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
