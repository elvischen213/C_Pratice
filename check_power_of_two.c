#include<stdio.h>

int check_two(int num){
    return ((num&(num-1))==0);
}

int main(){
    int num;
    printf("plz enter a num:");
    scanf("%d", &num);
    if (check_two(num))
        printf("Number is power of two!");
    else
        printf("Number isn't power of two!");
    return 0;
}