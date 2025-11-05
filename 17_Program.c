// 17. Find intersection of two sorted arrays
#include<stdio.h>
int main(){
    int n1,n2;
    printf("Enter number of elements for 1st array : ");
    scanf("%d",&n1);
    int arr1[n1];
    printf("Enter %d Elements(Sorted) :\n",n1);
    for(int i=0;i<n1;i++){
        scanf("%d",&arr1[i]);
    }

    printf("Enter number of elements for 2nd array : ");
    scanf("%d",&n2);
    int arr2[n2];
    printf("Enter %d Elements(Sorted) :\n",n2);
    for(int i=0;i<n2;i++){
        scanf("%d",&arr2[i]);
    } 


    int res[100];
    int c=0;
    int a=0,b=0;
    while(a<n1 && b<n2){
        if(arr1[a]==arr2[b]){
            res[c++]=arr1[a];
            a++;
            b++;
        }
        else if(arr1[a]<arr2[b]){
            a++;
        }
        else{
            b++;
        }
    }
    if(c==0){
        printf("Null Intersection");
    }
    else{
        printf("Intersection :\n");
        for(int i=0;i<c;i++){
            printf("%d ",res[i]);
        }
    }
}
