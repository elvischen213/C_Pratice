#include<stdio.h>
#include<stdlib.h>

void cal_gcd_lcm(int a,int b,int *gcd,int *lcm){
    int aa = a;
    int bb = b;
    if (bb>aa){
        aa = b;
        bb = a;
    }
    while(aa%bb!=0){
        int tmp;
        tmp = aa % bb;
        aa = bb;
        bb = tmp;
    }
    *gcd = bb;
    *lcm = (a * b)/(*gcd);
}

int GCD_re(int x, int y){
    if(y==0)
        return x;
    else
        return GCD_re(y,(x % y));
}

int main(){
    int a = 30, b = 45;
    int gcd = 0, lcm = 0;
    gcd = GCD_re(a, b);
    lcm = a * b / gcd;
    printf("%3d ,%3d", gcd, lcm);
}