#include <stdio.h>
#include <stdlib.h>

//2. 17-timeCalculation
//nhập vào 1 số nguyên đại diện cho s
//từ s đó quy ra giờ phút giây
//vd: 4700s
//01:18:20
//phải in theo format
//  hint: %02d | sử dụng / %


int main()
{
    int s;
    printf("\nInput vao so s: ");
    scanf("%d", &s);

    //Doi sang gio:phut:giay

    int gio;
    gio = s / 3600;//1h=3600s

    int phut;
    phut = (s % 3600) / 60;//Sau khi có số giờ cụ thể thì số giây dư/60 lấy nguyên ra phút

    int giay;
    giay = (s % 3600) % 60;//Sau khi có giờ cụ thể thì số giây dư%60 lấy ra được số giây cuối cùng

    //In quy đổi từ giây ra giờ:phút:giây

    printf("%02d:%02d:%02d", gio, phut, giay);
    //Xài %02d để in mà không phải là %d là vì:
    //Có số 2 hiểu là trường in 2 kí tự
    //+Nếu in 1 kí tự sẽ để sẵn cho 1 chỗ trống
    //+Có số 0 ở trước để khi trường trống thì quăng số 0 vào. Trống
    //bao nhiêu thì bấy nhiêu số 0
    //+Nếu số in ra vượt qua quá trường thì vẫn in bình thường và sẽ không có
    //số 0 ở phía trước.

    return 0;
}
