#include<stdio.h>


union check
{
    int val;
    char ch[4];
};

typedef union check check_num;

int main(){
    check_num a;
    a.val = 0x12345678;

    if (a.ch[0]== 0x12 && a.ch[1]== 0x34 && a.ch[2]==0x56 && a.ch[3]==0x78)
        printf("Big Endian!");
    else if (a.ch[0]==0x78 && a.ch[1]==0x56 && a.ch[2]==0x34 && a.ch[3]== 0x12)
        printf("Little Endian!");
    else
        printf("Unknown Endian!");
return 0;
}