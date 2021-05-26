#include <stdio.h>
#include<string.h>

void reverse_string(char *stri){
    int str_r = strlen(stri) - 1;
    int str_l = 0;
    while (str_l<str_r){
        char tmp;
        tmp = stri[str_r];
        stri[str_r] = stri[str_l];
        stri[str_l] = tmp;
        str_r--;
        str_l++;
    }
}

int main(){
    char string[] = "Hello I am elvis!";
    printf("str=%s\n", string);
    reverse_string(string);
    printf("str=%s\n", string);
    return 0;
}