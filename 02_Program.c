//2. Reverse an array in place
#include<stdio.h>
int main(){
    int arr[100],n,temp;
    printf("Enter number of Elements in the array :\n");
    scanf("%d",&n);
    printf("Enter %d Elements in the array :\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n/2;i++){
        temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
    printf("Reversed array is :\n");
    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}