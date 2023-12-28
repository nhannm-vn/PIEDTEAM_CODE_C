#include <stdio.h>
#include <stdlib.h>

//Nhập vào tháng và in ra tháng đó có bao nhiêu ngày
//Xài lệnh switch/case/default

int main()
{
    int thang;
    printf("\nNhap vao so thang can xem: ");
    scanf("%d", &thang);

    switch(thang){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:{
            printf("\nthang %d co 31 ngay", thang);
            break;
        }
        case 4:
        case 6:
        case 9:
        case 11:{
            printf("\nthang %d co 30 ngay", thang);
            break;
        }
        case 2:{
            int nam;
            printf("\nNhap vao nam: ");
            scanf("%d", &nam);
            if((nam % 4 == 0 && nam % 100 != 0) || nam % 400 ==0){
                printf("\nthang %d co 29 ngay", thang);
            }else{
                printf("\nthang %d co 28 ngay");
            }
            break;
        }
        default:{
            printf("\nthang nhap vao khong phu hop");}

    }


    return 0;
}
