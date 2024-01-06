#include <stdio.h>
#include <stdlib.h>
/*
6.Viết hàm nhận vào một số thực, trả ra 1 nếu đảo
ngược phần dư của nó là số nguyên tố, và 0 nếu k phải.
vd: 4.13 => 1
vd: 8.91 => 1
vd: 12.32=> 1
vd: 10.23 => 0
vd: 11.43 => 0
*/

int checkPrimeDu(int du);//Hàm check phần dư

int main()
{
    int n;
    char ch;
    int du;
    printf("\nNhap so thuc di: ");
    scanf("%d", &n);//Chứa phần nguyên
    scanf("%c", &ch);//Chứa dấu .
    scanf("%d", &du);//Chứa phần dư để check

    printf("\n%d", checkPrimeDu(du));//Nếu (int n, int du) cũng đc. Nhưng phải theo thứ tự
    //để lệnh ẩn tham chiếu đúng giá trị(đúng theo dòng lệnh ẩn khi xài hàm)

    return 0;
}
int checkPrimeDu(int du){
    int tmp = du;
    int rye = 0;
    int m = 0;
    while(tmp != 0){//Đảo ngược phần dư
        rye = tmp % 10;
        m = m * 10 + rye;
        tmp /= 10;
    }

    if(m >= 2){//Check Prime
        for(int i = 2; i <= m - 1; i++){
            if(m % i == 0){
                return 0;
            }
        }
        return 1;
    }
    return 0;
}
