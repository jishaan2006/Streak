//14. Subarray with given sum (Two pointer / Sliding window)
#include<stdio.h>
int main(){
    int n;
    int t;
    printf("Enter number of elements :\n");
    scanf("%d",&n);
    printf("Enter %d elements :",n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("Sum to find :\n");
    scanf("%d",&t);
    int currsum=0;
    int start=0,end=0;
    while(end<n){
        currsum=currsum+arr[end];
        if(currsum>t && start<=end){
            currsum=currsum-arr[start];
            start++;
        }
        if(currsum==t){
            printf("Subarray found from index %d to %d\n", start, end);
            return 0;
        }
        end++;
    }
    printf("No subarray found\n");
}