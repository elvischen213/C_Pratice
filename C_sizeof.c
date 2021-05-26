#include<stdio.h>
#include<stdlib.h>

struct CHAR 
{
     unsigned int ch;      //8位
     unsigned int font;    //6位
     unsigned int size;    //18位
}ch1;


struct CHAR2 
{
     unsigned char ch;    //8位
     unsigned char font;  //8位
     unsigned char  size;  //32位
}ch2;


int main(){
    int aa, bb;
    aa = sizeof(ch1);
    bb = sizeof(ch2);

    printf("1st.%d\n",aa);
    printf("2nd.%d\n",bb);
}