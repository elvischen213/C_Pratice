#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int size = 24;
    int output[size / 4][4];
    int mode, row, col;

    for (int i = 1; i < size;i+=4){
        mode = i % 3;
        col = 0;
        row = i / 4;
        if(mode==1){
            for (int j = 0; j < 4;j++)
                output[row][j]=i+j;
        }
        else if(mode==2){                          
                    output[row][col] = i  ;
                    output[row+1][col ] = i + 1;
                    output[row + 1][col + 1] = i + 2;
                    output[row ][col+1] = i + 3;                          
        }
        else{
            col = 2;
            row = row - 1;
            output[row][col] = i  ;
            output[row+1][col] = i + 1;
            output[row + 1][col + 1] = i + 2;
            output[row ][col+1] = i + 3;

        }
     
    }
    for (int i = 0; i < size/4;i++){
        for (int j = 0; j < 4;j++){
            printf("%3i", output[i][j]);
            if (j==3)
                printf("\n");
        }
    }
        return 0;
}