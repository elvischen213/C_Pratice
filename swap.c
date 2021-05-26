#include <stdio.h>

void swap(int *a, int *b){
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}

int main(){
    int input1 = 87;
    int input2 = 78;
    printf("Befor swap,%d,%d\n", input1, input2);
    swap(&input1, &input2);
    printf("After swap,%d,%d\n", input1, input2);
    return 0;
}