//16. Find duplicate number in array
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
    int res[100];
    int c=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++)

        if(arr[i]==arr[j]){
            int found=0;
            for(int k=0;k<c;k++){
                if(arr[i]==res[k]){
                    found=1;
                }
           }
           if(!found){
                res[c++]=arr[i];
           }
        }
    }
    if(c==0){
        printf("No duplicate elements found.");
    }
    else{
        printf("Duplicate Elements are :\n");
        for(int i=0;i<c;i++){
            printf("%d ",res[i]);
        }
    }
}