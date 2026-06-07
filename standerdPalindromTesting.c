#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char str[100];
    int len,choice;
    while(1){
    printf("Enter the string that has to be check :");
    scanf("%s",str);
    len=strlen(str);
    
        printf("do you want  to check the palindrom status ,press  1.for Yes and press  0 for No:");
        scanf("%d",&choice);
        if(choice==1)
        {
           int flag=1;
         for(int i=0;i<len/2;i++){
         if(str[i]!=str[len-i-1]){
         flag=0;
         break;
                                 }                                          
                                 }
         if(flag==0){
            printf("The given string is not a palindrom!\n");   
         }                        
         else{
            printf("The string is a palindrom\n");
         }
        }
                                
        
        else
        {
            exit(0);
        }
            }
        }