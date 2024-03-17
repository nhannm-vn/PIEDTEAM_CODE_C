#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//2.RemoveVowel
// f(str)
//  str = "xinChaoEm"
//  => str = "xnChm"
int splice(char str[], int pos, int amount);
void removeVowel(char str[]);
int main()
{
    char str[100] = "xinChaoEm";
    removeVowel(str);
    printf("\nstr ne:%s",str);
    return 0;
}
void removeVowel(char str[]){
    for(int i = 0; i <= strlen(str) - 1; i++){
        if(str[i] == 'a' || str[i] == 'o' || str[i] == 'e' || str[i] == 'u' || str[i] == 'i'
           || str[i] == 'A' || str[i] == 'O' || str[i] == 'E' || str[i] == 'U' || str[i] == 'I'){
            splice(str, i, 1);
            i--;
        }
    }
}

int splice(char str[], int pos, int amount){
    int size = strlen(str);
    if(pos < 0 || pos >= size){
        return 0;
    }
    for(int i = pos; i <= size - 1 - amount; i++){
        str[i] = str[i+amount];
    }
    amount = size - pos >= amount ? amount : size - pos;
    str[size - amount] = '\0';

    return 1;
}
