//factorial of a number without recurision
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num,fact=1,check=1;
    while(1){
    printf("Do you want to know factorial press 1. for Yes and other number for No:");
    scanf("%d",&check);   
    if(check==1){ 
    printf("Enter the number:");
    scanf("%d",&num);
    while(num!=1  && num!=0)
    {
        fact=num*fact;
        num-=1;
    }
    printf("The factorial of the given number is %d\n",fact);
}
else{
    exit(0);
}
}
}

