#include<stdio.h>

int strcmp_e(char* s1, char* s2){
    int i = 0;
    while(s1[i]!='\0' && s2[i]!='\0'){
        if(s1[i] != s2[i])
            return 0;
        i++;
    if(s1[i] != s2[i])
            return 0;
    }
    return 1;
}

int main(){
    char s1[7] = "hello!";
    char s2[9] = "hello!!";

    if(strcmp_e(s1,s2))
        printf("same!");
    else
        printf("not same!");
}
