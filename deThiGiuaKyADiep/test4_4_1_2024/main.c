#include <stdio.h>
#include <stdlib.h>
/*
Nhập vào 1 khoảng Start và End, Đếm số lượng số nguyên tố, số chính phương,
số chẵn, số lẽ có trong khoảng ( 8p )  ( 0 ra 0 vào )
o	Start 8, end 2
o	Start 1 end 10
o	Số nguyên tố: 4 (2, 3, 5, 7)
o	Số chính phương: 3 (1, 4, 9)
o	Số chẵn: 5 (2, 4, 6, 8, 10)
o	Số lẻ: 5 (1, 3, 5, 7, 9)
Lưu ý
-	printf trước khi scanf phải in ra là “Nhap start: ”
+ printf(“\nNhap start: ”);
+ scanf(“%d”, & start);
Tương tự end
+ printf(“\nNhap end: ”);
-	kết quả in ra
+ printf(“\n%d-%d-%d-%d”, So nguyen to, So chinh phuong, So chan, So le);

*/

void countNumber();

int main()
{
    countNumber();

    return 0;
}
void countNumber(){
    int start;
    int end;
    printf("\nNhap start: ");
    scanf("%d", &start);

    printf("\nNhap end: ");
    scanf("%d", &end);

    if(start > end){
        int tmp = 0;
        tmp = start;
        start = end;
        end = tmp;
    }
    int countEven = 0;
    int countOdd = 0;
    int countCP = 0;
    int countPrime = 0;

    for(int i = start; i <= end; i++){
        if(i % 2 == 0){
            countEven++;
        }else{
            countOdd++;
        }
        if(sqrt(i) == (int)sqrt(i)){
            countCP++;
        }
        int isPrime = 1;
        if(i >= 2){
            for(int j = 2; j <= i - 1; j++){
                if(i % j == 0){
                    isPrime = 0;
                    break;
                }
            }
            if(isPrime){
                countPrime++;
            }
        }
    }
    printf("\n%d-%d-%d-%d", countPrime, countCP, countEven, countOdd);
}
