//7. Cyclically rotate an array by one 
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("Enter size of array :\n");
    scanf("%d",&n);
    int *arr=(int *)malloc(n * sizeof(int));

    printf("Enter %d Elements :\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int temp=arr[n-1];
    for(int i=n-1;i>0;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=temp;

    printf("Cyclically rotated array is :\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}