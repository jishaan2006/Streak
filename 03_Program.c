//3. Find the 'Kth' max and min element of an array
#include<stdio.h>
int main()
{
    int arr[100],n,k;
    printf("Enter number of elements:");
    scanf("%d",&n);
    printf("Enter elements of array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter value of k (Kth Max & Min):\n");
    scanf("%d",&k);
    if(k>0 && k<=n){
        for (int j = 0; j < n; j++){
            for (int l=0;l < n-j-1 ; l++){
                if(arr[l]>arr[l+1]){
                    int temp=arr[l];
                    arr[l]=arr[l+1];
                    arr[l+1]=temp;
                }
            }
        }
        printf("Kth maximum element is :%d\n",arr[n-k]);
        printf("Kth minimum element is :%d\n",arr[k-1]);
    }
    else{
        printf("Invalid Value of K.");
    }
    return 0;
}