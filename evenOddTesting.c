#include<stdio.h>
#include<stdlib.h>
int main(){
    int num,choice;
    while(1){
    printf("Enter the number :");
    scanf("%d",&num);
    printf("Do you want to check the number press 1. FOR Yes Press 2. for No");
    scanf("%d",&choice);
    if(choice==1){
        if(num%2==0){
            printf("The number is even\n");
        }
    else{
        printf("The Number is odd\n");
    }    
    }    
    else
    {
        exit(0);
    }        
}
}