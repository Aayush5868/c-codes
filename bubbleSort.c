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
    int i,j,n;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    printf("Enter the elements of the array:\n");
    for(i=0;i<n;i++){
      printf("Enter the %d element :",i+1);
      scanf("%d",&temp[i]);

    }
    for(i=0;i<n;i++){
        for(j=0;j<n-1-i;j++){
            if(temp[j]>temp[j+1]){
               int temp1=temp[j];
               temp[j]=temp[j+1];
               temp[j+1]=temp1;
            }
        }
    }
     display(n);
}