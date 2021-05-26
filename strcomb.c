#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char *strcomb(char *s1, char *s2){
    int size,str_1,str_2;
    str_1 = strlen(s1);
    str_2 = strlen(s2);
    printf("s1's len is %d\n",str_1);
    printf("s2's len is %d\n", str_2);
    size = str_1 + str_2;
    char *out = malloc(sizeof(char) * size);
    for (int i = 0; i < str_1;i++)
        out[i] = s1[i];

    for (int i = str_1; i < (str_1+str_2);i++)
        out[i] = s2[i-str_1];
    return out;
}

int main(){
    char s1[5] = "Hi! ";
    char s2[11] = "i am chen!";

    char *s3 = strcomb(s1, s2);
    printf("%s", s3);
}