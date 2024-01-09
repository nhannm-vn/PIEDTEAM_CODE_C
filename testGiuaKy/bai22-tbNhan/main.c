#include <stdio.h>
#include <stdlib.h>
/*22.hàm nhận vào start và end tính trung bình nhân của các số từ start đến end ( 4p )
*/

float tbNhan(int start, int end);

int main()
{
    int start = 0;
    int end = 0;
    printf("\nNhap start: ");
    scanf("%d", &start);

    printf("\nNhap end: ");
    scanf("%d", &end);

    if(start > end){
        int tmp = start;
        start = end;
        end = tmp;
    }

    printf("\n%f", tbNhan(start, end));


    return 0;
}
float tbNhan(int start, int end){
    int count = 0;
    int mul = 1;
    for(int i = start; i <= end; i++){
        mul *= i;
        count++;
    }
    return pow(mul, (float)1/count);
}
