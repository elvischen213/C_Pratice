#include<stdio.h>
#include<stdlib.h>
void check_date(int *, int, int *);

int main(){
    int today[3] = {2016, 9, 11};
    int output[3];

    check_date(today, 1000, output);
    printf("check after 338 days's date is %d,%d,%d", output[0], output[1], output[2]);
}

void check_date(int *today,int gaps,int *output){
    int month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int duration = gaps + today[2];

    while (duration>month[today[1]-1]){
        if (today[0]%4==0)
            month[1] = 29;
        else
            month[1] = 28;
        duration -= month[today[1]-1];
        today[1]++;

        if (today[1]==13){
            today[0]++;
            today[1] = 1;
        }
    }
    today[2] = duration;
    for (int i = 0; i < 3;i++)
        output[i] = today[i];
}
