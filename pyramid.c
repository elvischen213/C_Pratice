#include<stdio.h>
#include<stdlib.h>

int main(){
    for (int i = 9; i > 0;i-=2){
        for (int j = 0; j < (9-i)/2;j++)
            printf(" ");
        for (int j = 0; j < i;j++)
            printf("%d",i);

        printf("\n");
    }
}