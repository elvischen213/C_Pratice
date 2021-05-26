#include<stdio.h>
#include<stdlib.h>

#define size 10

int binary_search(int *input,int target){
    int L = 0;
    int R = size - 1;
    while (L <= R){
        int M;
        M = (L + R) / 2;
        if(input[M]==target){
            return M;}
        else if(input[M]>target)
            R = M - 1;
         else
             L = M + 1;
        
    }
    return -1;
}
int main(){
    int input[size] = {1, 2, 3, 4, 5, 45, 67, 89, 99, 101};
    int target;

    printf("plz enter target:");
    scanf("%d", &target);

    int index = binary_search(input, target);
    printf("Target is %d and index is at %d", target, index);
}