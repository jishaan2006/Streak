//1. Find the maximum and minimum element in an array
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("Enter number of Elements in the array :\n");
    scanf("%d",&n);
    int *arr=(int *)malloc(n * sizeof(int));
    printf("Enter %d Elements :\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int max=arr[0];
    int min=arr[0];
    
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }

    printf("Maximum element = %d\n",max);
    printf("Minimum element = %d\n",min);
}
    
    
