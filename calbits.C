#include<stdio.h>
#include<stdlib.h>

int calbits(int input);

int main(){
    int a = 1023;
    int output = calbits(a);

    printf("output = %d", output);
    return 0;
}

int calbits(int input){
    int count = 0;
    while (input != 0){
        input = input & (input - 1);
        count++;
    }
    return count;
}