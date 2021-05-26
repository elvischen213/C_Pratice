#include<stdio.h>

void print_nodub_num(int *arr,int size){
    int arr_index = 0;
    for (int i = 0; i <= 100;i++){
        if(arr_index !=10){
            if (arr[arr_index]==i)
                arr_index++;
            else
                printf("%d\n", i);
        }
        else{
            for (int j = i; j < 100;j++)
                printf("%d\n", j);
                break;
        }       
}
}
int main(){
    int size = 10;
    int a[10] = {2, 4, 13, 16, 17, 31, 55, 66, 77, 88};
    print_nodub_num(a,size);
    return 0;
}