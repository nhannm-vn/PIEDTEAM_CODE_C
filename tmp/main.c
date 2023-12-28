#include<stdio.h>
#include<conio.h>

int main()
{
   /*
    int i, n;
    float S;
    S = 0;
    do
    {
        printf("\nNhap n: ");
        scanf("%d", &n);
        if(n < 1)
        {
            printf("\nN phai lon hon hoac bang 1. Xin nhap lai !");
        }
    }while(n < 1);

    for(i = 0; i < n; i++)
    {
        S = S + 1.0 / ((2 * i) + 1);
    }
    printf("\nTong la: %f", S);

    getch();
   */
   /*
    int i, n;
    long S;
    do
    {
    printf("\nNhap n(n > 0): ");
    scanf("%d", &n);
      if(n <= 0)
       {
        printf("\n N phai > 0. Xin nhap lai !");
       }
    }while(n <= 0);
    i = 1;
    S = 0;
    printf("\nCac uoc nho hon %d la",n);
    while(i < n)
    {
        if(n % i == 0)
        {
            printf("%4d", i);
           S = S + i;
        }
            i++;
    }
    printf("\nTong cac uoc nho hon %d la: %ld", n, S);
    getch();*/

    //UOC SO LE LON NHAT
    /*
    int i, n, max;
    do
    {
    printf("\nNhap n(n > 0): ");
    scanf("%d", &n);
      if(n <= 0)
       {
        printf("\n N phai > 0. Xin nhap lai !");
       }
    }while(n <= 0);

    i = 1;
    max = 1;
    printf("\nCac uoc so le cua so %d la: ",n);
    while(i <= n)
    {
        if((n % i == 0) && (i % 2 == 1))
        {
            if(i > max)
            {
            max = i;
            }
            printf("%4d", i);
        }
            i++;
    }
    printf("\nUoc so le lon nhat la %d", max);

    getch();
    */
    /*
    long themang, n;
    int sochuso;

    do
    {
    printf("\nNhap n: ");
    scanf("%ld", &n);
    }while(n < 0 && printf("\nLoi: n >= 0 !"));
    sochuso = 0;
    themang = n;

    if(n == 0)
        sochuso = 1;
    while(themang != 0)
    {
        sochuso = sochuso + 1;
        themang = themang / 10;
    }
    printf("\nSo chu so cua %ld la %d", n, sochuso);

    //int sochuso = n == 0 ? 1 : (int)log10((float)n) + 1;

    getch();
    */
    //Số đảo ngược
    /*
    int n;
    int SoNghichDao = 0;
    do
    {
        printf("\nNhap n: ");
        scanf("%d", &n);
    }while(n < 0 && printf("\nLoi: (n >= 0)"));

    printf("\nSo dao nguoc cua %d la: ", n);
    do
    {
        printf("%d", n % 10);
    }while(n /= 10); // tương đương n = n / 10; n != 0;

    // có thể viết

    /*do
    {
        SoNghichDao = SoNghichDao * 10 + n % 10;
        n /= 10;
    }while(n != 0);
    printf("\n%d", SoNghichDao);*/

    int i, j, n;

    printf("\nNhap n: ");
    scanf("%d", &n);

    // Câu a:
    for(i = 1; i <= n; ++i)
    {
        for(j = 1; j <= n + i - 1; ++j)
        {
            printf((j < n - i + 1) ? " " : "%c", 234);
        }
        putchar('\n');
    }



    // Câu b:
    for(i = 1; i <= n; ++i)
    {
        for(j = 1; j <= n + i - 1; ++j)
        {
            printf((j == n - i + 1 || j == n + i - 1 || i == n) ? "%c" : " ", 234);
        }
        putchar('\n');
    }
    printf("\n");
    // Câu c:
    for(i = 1; i <= n; ++i)
    {
        for(j = 1; j <= n; ++j)
        {
            printf((j <= i) ? "%c" : " ", 234);
        }
        printf("\n\n");
    }

    // Câu d
    for(i = 1; i <= n; ++i)
    {
        for(j = 1; j <= n; ++j)
        {
            printf((j == i || j == 1 || i == n) ? "*" : " ");
        }
        printf("\n");
    }


    getch();


    return 0;
}
