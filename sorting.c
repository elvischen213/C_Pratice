//Sorting pratice//
//quick sort
//merge sort
//bubble sort
//bucket sort

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define size 100

void quick_sort(int *, int, int);
void bubble_sort(int *);
void merge_sort(int *, int, int);
void merge(int *, int, int,int);
void bucket_sort(int *);

void swap(int *a, int *b){
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}
void printarr(int * arr){
    for (int i = 0; i < size;i++)
        printf("%3d", arr[i]);
    printf("\n");
}

int main(){
    srand(time(NULL));
    int array1[size], array2[size], array3[size], array4[size];
    for (int i = 0; i < size;i++){
        int num = rand() % 50+1;
        array1[i] = num;
        array2[i] = num;
        array3[i] = num;
        array4[i] = num;
    }
    printf("original array:\n");
    printarr(array1);

    printf("quick sort:\n");
    quick_sort(array1, 0, size - 1);
    printarr(array1);

    printf("bubble sort:\n");
    bubble_sort(array2);
    printarr(array2);

    printf("merge sort:\n");
    merge_sort(array3, 0, size - 1);
    printarr(array3);

    printf("bucket sort:\n");
    bucket_sort(array4);
    printarr(array4);

}

void quick_sort(int* input,int front,int end){
    int pivot = front;
    int left = front;
    int right = end;
    int tmp;

    if(front<end){
        while(left<right){
            
            while(input[left]<=input[pivot] && left<end)
                left++;
            while(input[right]>input[pivot] && right>front)
                right--;

            if(left<right){
                swap(&input[left], &input[right]);
            }
        }

        tmp = input[pivot];
        input[pivot] = input[right];
        input[right] = tmp;

        quick_sort(input,front,right-1);
        quick_sort(input,right+1,end);
    }
}

void bubble_sort(int* array){
    for (int i = 0; i < size;i++){
        for (int j = 0; j < size - 1;j++){
            if(array[j]>array[j+1])
                swap(&array[j], &array[j + 1]);
        }
    }
}

void merge_sort(int* array,int front,int end){
    if(front<end){
        int mid = front + (end - front) / 2;
        merge_sort(array, front, mid);
        merge_sort(array, mid + 1, end);

        merge(array, front, mid, end);
    }
}

void merge(int *array,int front,int mid,int end){
    int aryL[mid - front + 1];
    int aryR[end - (mid + 1)+1];
    int L = 0, R = 0;

    for (int i = front; i <= mid;i++)
        aryL[L++] = array[i];
    for (int i = mid + 1; i <= end;i++)
        aryR[R++] = array[i];

    int p_l = 0, p_r = 0;
    for (int i = front; i <= end;i++){
        if (p_l==L)
            array[i] = aryR[p_r++];
        else if(p_r==R)
            array[i] = aryL[p_l++];
        else if(aryL[p_l]<=aryR[p_r])
            array[i] = aryL[p_l++];
        else
            array[i] = aryR[p_r++];
    }
}

void bucket_sort(int* array){
    int min = array[0];
    int max = array[0];

    for (int i = 0; i < size;i++){
        if(array[i]<min)
            min = array[i];
        else if(array[i] > max)
            max = array[i];
    }
    int b_size = max - min + 1;
    int *bucket = calloc(b_size,sizeof(int));

    for (int i = 0; i < size;i++)
        bucket[array[i] - min] += 1;

    for (int i = 0, j = 0; j < b_size;)
    {
        if(bucket[j]!=0){
            array[i] = j + min;
            bucket[j]--;
            i++;
        }
        else
            j++;
    }
}