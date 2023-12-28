#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    //Lệnh gets và puts
    //gets là nhập vào chuỗi
    //puts xuất ra chuỗi, đặc biệt không cần xài dấu \n
    //strcat chuỗi vào chuỗi
    //strcpy là lệnh thay thế hết trong chuỗi
    char ten[50];
    char monhoc[50];
    char output[100];
    puts("Hay nhap vao ten cua sinh vien: ");
    gets(ten);
    puts("Hay nhap vao mon hoc:");
    gets(monhoc);

    strcat(output, ten);
    strcat(output, " thich hoc va hoc tot mon ");
    strcat(output, monhoc);
    puts(output);



    return 0;
}
