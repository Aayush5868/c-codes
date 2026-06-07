#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char str[100];
    int len;
    printf("Enter the string that has to be check :");
    scanf("%s",&str);
    len=strlen(str);
    for(int i=0;i<len/2;i++){
     if(str[i]!=str[len-i]){
        printf("the string is not a palendrom!");
        exit(0);
     }
    }
    printf("The string is a palendrom");
}