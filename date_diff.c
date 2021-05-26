#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int days_totall(int *);
int days_diff(int *, int*);

int main (){
    int date1[3] = {2016, 9, 11};
    int date2[3] = {2021, 5, 15};
    int output;

    output = days_diff(date1, date2);

    printf("two dates's  gap is %d", output);
} 

int days_total(int* date){
    int days = 0;
    int month_days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    /*year */
    if (date[0]>1){
        days = (date[0] - 1) * 365 + floor((date[0] - 1) / 4);
    }
    /*month */
    if (date[0]%4==0){
        month_days[1] = 29;
    }
    for (int i = 0; i < date[1]-1;i++)
        days += month_days[i];
    /*day */
    days += date[2];
    return days;
}

int days_diff(int *d1,int *d2){
    int date1_total, date2_total;
    date1_total = days_total(d1);
    date2_total = days_total(d2);

    return (abs(date1_total - date2_total));
}
