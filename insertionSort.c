#include<stdio.h>
int temp[100];
void display(int n)
{
 printf("--------The sorted array is --------\n");
 for(int i=0;i<n;i++){
    printf("%d <->",temp[i]);
 }
}
int main()
{
    int i,j,n,key;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    printf("Enter the elements of the array:\n");
    for(i=0;i<n;i++){
      printf("Enter the %d element :",i+1);
      scanf("%d",&temp[i]);
    }
    for(i=1;i<n;i++)
    {
       key=temp[i];
       j=i-1;
       while(j>=0 && temp[j]>key){
        temp[j+1]=temp[j];
        j--;
       }
        temp[j+1]=key;

    }
    
     display(n);
}