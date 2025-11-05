//18. Trapping Rain Water
#include<stdio.h>
int main(){
    int n;
    printf("Enter number of elements : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d Elements :\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int left_max[n];
    left_max[0]=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>left_max[i-1]){
            left_max[i]=arr[i];
        }
        else{
            left_max[i]=left_max[i-1];
        }
    }

    int right_max[n];
    right_max[n-1]=arr[n-1];
    for(int i=n-2;i>=0;i--){
        if(arr[i]>right_max[i+1]){
            right_max[i]=arr[i];
        }
        else{
            right_max[i]=right_max[i+1];
        }
    }

    int water=0;
    int height=0;
    for(int i=0;i<n;i++){
        if(left_max[i]<right_max[i]){
            height=left_max[i];
        }
        else{
            height=right_max[i];
        }
        water=water+(height-arr[i]);  
    }

    printf("Water trapped is %d units",water);
}