#include <stdio.h>

int modifybit(int n,int p,int b){
    int mask = 1 << p;
    return (n & ~mask) | ((b << p) & mask);
}
int modifybit1(int n,int p,int b){
    int mask = 1 << p;
    return (n & ~mask) | ((b << p) );
}

int least_significant_bit(int x){
    for (int i = 0; i < 31;i++)
    if(x& 1<<i)
        return i;
    return -1;
}

unsigned getbits(unsigned int x,int p,int n){
    return (x >> (p - n) & ~(~0 << n));
}

int main(){
    int a = 100;
    printf("%d", getbits(a,0,4));
    return 0; 
}