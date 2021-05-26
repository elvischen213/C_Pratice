#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 11
void shuffle(int* input){
    srand(time(NULL));
    int tmp;
    for (int i = SIZE - 1; i > 0;i--){
        int idx = rand() % i;
        printf("idx= %d\n", idx);
        tmp = input[idx];
        input[idx] = input[i];
        input[i] = tmp;
    }
}

int main(){
    int array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (int i = 0; i < SIZE ;i++)
        printf("%d", array[i]);

    printf("\n");
    shuffle(array);
    printf("\n");

    for (int i = 0; i < SIZE ;i++)
        printf("%d", array[i]);

    printf("\n");
    return 0;
}