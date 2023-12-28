#include <stdio.h>
#include <stdlib.h>

/*21-primeProgram
1. viết 1 chương trình
    cho người dùng nhập vào 1 số nguyên đích thực
    kiểm tra xem số đó có phải số nguyên tố không.
    sau đó lại cho người dùng nhập vào 1 số nguyên
    đích thực,kiểm tra xem số đó có phải số nguyên
    tố không, rồi lại tiếp tục ...
    nếu em nhập vào 0 thì ngừng
*/

int main()
{
    //Bước 1: kiểm tra xem đó có phải là số nguyên đích thực hay không
    //Nếu biến ch hứng đúng \n thì nó sẽ dừng vòng lặp lại
    //Bước 2: kiểm tra tiếp số nguyên tố

    int number = 0;
    char ch;//Dùng để hứng \n

    do{//Sau khi kt số nguyên-->số nguyên tố-->in ra-->hỏi tiếp
            do{//Bước 1: Kiểm tra số nguyên
            printf("\nInput number di: ");
            scanf("%d", &number);//Số nguyên sẽ vào đây
            scanf("%c", &ch);//Hứng dấu kí tự \n hoặc kí tự lạ như a, dấu chấm
            fflush(stdin);//Xóa đi dữ liệu buffer. Chuẩn bị cho số kế tiếp
        }while(ch != 10);//Lặp đến khi nào ch chứa \n(10)

        //Bước 2: Kiểm tra nguyên tố:
        if(number >= 2){
            int isPrime = 1;
            for(int i = 2; i <= number - 1; i++){
                if(number % i == 0){
                    isPrime = 0;
                    break;
                }
            }
            if(isPrime == 1){
                printf("\n%d is prime", number);
            }else{
                printf("\n%d is not prime", number);
            }
        }else{
            printf("\n%d is not prime", number);
        }
        printf("\n");
    }while(number != 0);//Khi nào người dùng nhập vào 0 thì dừng lại

    //Nếu muốn ngay số 0 dừng mà không in ra dòng lệnh không phải
    //là số nguyên tố thì có thể bỏ else của if >= 2


    return 0;
}
