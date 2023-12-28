#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Kiểm tra số nguyên tố bằng phương pháp cắm cờ(flag)

    int n;
    printf("\nNhap vao so can kiem tra ");
    scanf("%d", &n);

    int key = 1;

    if(n >= 2)
    {
        for(int i = 2; i <= n - 1; i++)
        {
            if(n % i == 0)
            {
                key = 0;
                break;
            }
        }
        if(key)
        {
            printf("\n%d is prime", n);
        }
        else
        {
            printf("\n%d is not prime", n);
        }
    }
    else
    {
        printf("%d is not prime", n);
    }




    return 0;
}
