#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Nhập vào tháng cần kiểm tra:
    //In ra số ngày trong tháng đó:

    int thang;
    printf("\nNhap vao thang: ");
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
        return 0;
    }
    case 4:
    case 6:
    case 9:
    case 11:{
        printf("\nthang %d co 30 ngay", thang);
        return 0;
    }
    case 2:{
        int nam;
        printf("\nnhap vao nam chua thang: ");
        scanf("%d", &nam);

        //Xet nam nhuan:
((nam % 4 == 0 && nam % 100 != 0) || nam % 400 == 0) ? printf("\nthang %d co 29 ngay", thang) : printf("\nthang %d co 28 ngay", thang);
        return 0;
    }
    default:{
        printf("\nthang nhap vao khong phu hop");
    }
    }


    return 0;
}
