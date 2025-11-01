//10. Leaders in an array
#include<stdio.h>
int isleader(int arr[],int s){
    for(int i=1;i<s;i++){
            if(arr[0]<arr[i]){
                return 0;
            }
        }
    return 1;
}
    

int main(){
    int n;
    printf("Enter Number of Elements :\n");
    scanf("%d",&n);
    printf("Enter Elements :\n");
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    int c=0;
    int res[100];
    for(int i=0;i<n;i++){
        if(isleader(arr+i,n-i)){
            res[c++]=arr[i];
         }
    }

    printf("Leaders in Array are :\n");
    for(int i=0;i<c;i++){
        printf("%d ",res[i]);
    }
    
    return 0;
}