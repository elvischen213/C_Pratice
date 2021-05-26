#include<stdio.h>

void print_Q2(int *a, int size, int b){
    int count = 0;
    while (a[count]<b*100){
        count++;
        if (count==size)
            break;
    }
    for (int i = 100 * b; i < 100 * (b + 1); i++)
    {
        if (count==size){
            for (int j = i; j < 100 * (b + 1);j++)
                printf("%d\n", j);
            break;
        }
        else if(a[count]==i)
            count++;
        else
            printf("%d\n", i);
    }
}

int main(){
    int a[10] = {4,9,11,43,45,55,61,92,99,270};
    print_Q2(a,10,2);
    return 0;
}