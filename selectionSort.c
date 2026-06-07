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
    int i,j,n,min,min_idx;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    printf("Enter the elements of the array:\n");
    for(i=0;i<n;i++){
      printf("Enter the %d element :",i+1);
      scanf("%d",&temp[i]);

    }
    for(i=0;i<n-1;i++){
        min_idx=i;
        for(j=1+i;j<n;j++){
            if(temp[min_idx]>temp[j]){
                min_idx=j;
            }
        }
         int temp1=temp[i];
        temp[i]=temp[min_idx];
        temp[min_idx]=temp1;
    }
     display(n);
}