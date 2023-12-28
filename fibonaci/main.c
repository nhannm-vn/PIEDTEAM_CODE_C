#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
0   0    prev      result = prev + curr   1 = 0 + 1
1	1    curr      prev = curr            2 = 1 + 1
2	1    result    curr = result          3 = 1 + 2
3	2
4	3
5	5
6	8
7	13
8	21
9	34
10	55
11	89
12	144
13	233
14	377
15	610
16	987
17	1597
18	2584
19	4181
20	6765
*/
//Nếu bình thường nói về dãy fibonacci trong tự nhiên sẽ là: 1 1 2 3 5 8
//Đối về lập trình sẽ là 0 1 1 2 3 5 8
//Setup tại ví trí 1
//Sau mỗi lần chạy tính kết quả trước rồi mới setup

int curr = 1;
int prev = 0;
int result = 1;

int n;
//Nhập vào vị trí cần kiểm tra giá trị:
printf("\nNhap vao vi tri can kiem tra: ");
scanf("%d", &n);
//
for(int i = 1; i <= n - 1; i++){//-1 là do ban đầu đã khởi tạo sẵn 1 trường hợp

    result = curr + prev;
    prev = curr;
    curr = result;
}
//In ra giá trị tại ví trí n:
printf("Tai vi tri %d trong day fibonacci co gia tri la: %d", n, result);




    return 0;
}
