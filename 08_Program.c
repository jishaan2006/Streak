//8. Kadane's Algorithm - Maximum Subarray Sum
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

    int maxsum=arr[0];
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
        if(sum>maxsum){
            maxsum=sum;
        }
        if(sum<0){
            sum=0;
        }

    }
    printf("The Max subarray sum is %d\n",maxsum);
    free(arr);
    return 0;
}