#include <stdio.h>
#include <stdlib.h>
int strLen(char str[]);
void strUpr(char str[]);
int splice(char str[], int pos, int amount);
int removeDup(char str[]);
int removeKey(char str[], char key);
int strInStr(char str[], char sub[]);
void delSubInStr(char str[], char sub[]);
int main()
{
    char str[100];
    printf("\nInput str:");
    gets(str);
    printf("\nstr ne:%s", str);

    char sub[100];
    printf("\nInput sub:");
    gets(sub);
    printf("\nsub ne:%s", sub);

    delSubInStr(str, sub);
    printf("\nstr sau xu li: ");
    printf("\n%s", str);

    return 0;
}
void delSubInStr(char str[], char sub[]){
    while(splice(str , strInStr(str, sub), strLen(sub)));
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

int removeDup(char str[]){
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

int splice(char str[], int pos, int amount){
    int size = strLen(str);
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

void strUpr(char str[]){
    for(int i = 0; i <= strLen(str) - 1; i++){
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

//strUpr: uperCase
//      f(str)
//      str: 'f88 NhA Cai dEn tU chAu Au'
//           'F88 NHA CAI DEN TU CHAU AU'
//RemoveDup:
//      xóa các ký tự trùng trong chuỗi
//spliceStr:
//      f(str, pos, amount)
//      từ vị trí xóa số lượng amount
//RemoveKey:
//      f(str, key)
//      xóa hết các key trong str
//***option
//strInStr: tìm chuỗi trong chuỗi
//delSubInStr: xóa sub trong str
