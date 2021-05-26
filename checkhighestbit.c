#include<stdio.h>

int checkhighestbit(int input);

int main(){
    int a = 487;
    int output = checkhighestbit(a);

    printf("%d\n", output);
    return 0;
}

int checkhighestbit(int x){
    int n = 31;
    if (x >> 16 == 0){
        n = n - 16;
        x=x << 16;
    }
    if (x >> 24 == 0){
        n = n - 8;
        x = x << 8;
    }
    if (x >> 28 == 0){
        n = n - 4;
        x = x << 4;
    }
    if (x >> 30 == 0){
        n = n - 2;
        x = x << 2;
    }
    if (x >> 31 == 0){
        n -= 1;
    }
    return n;
}