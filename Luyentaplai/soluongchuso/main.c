#include <stdio.h>
#include <stdlib.h>

//Nhập vào một chữ số nguyên dương
//Kiểm tra xem số đó có bao nhiêu chữ số

//Số có một chữ số vd: 9 / 10 sẽ dư chính nó và phần nguyên là 0

int main()
{
    int number;
    printf("\nInput number: ");
    scanf("%d", &number);

    int tmp = number;//Biến này xài thay đổi để in ra số 452  2  5  4
    int count = 0;
    do{
        tmp = tmp / 10;
        count ++;

    }while(tmp != 0);//Chia tới khi nào số đó /10 được 0 là số nguyên thì dừng

    printf("\nSo %d co tong cong %d chu so", number, count);

    return 0;
}
