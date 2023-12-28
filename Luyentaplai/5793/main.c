#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 1;
    for(;;){

        if(i != 5 && i != 7 && i != 93){
            printf("%d ", i);
        }
        i++;
        if(i > 100){
            break;
        }
    }

    return 0;
}
