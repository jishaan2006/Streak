//6. Find Union and Intersection of two arrays
#include<stdio.h>
#include<stdlib.h>

int main(){
    int n1,n2;
    
    printf("Enter Size of 1st Array :\n");
    scanf("%d",&n1);
    int *arr1=(int *)malloc(n1 * sizeof(int));
    printf("Enter Elements of first array :\n");
    for(int i=0;i<n1;i++){
        scanf("%d",&arr1[i]);
    }

    printf("Enter Size of 2nd Array :\n");
    scanf("%d",&n2);
    int *arr2=(int *)malloc(n2 * sizeof(int));
    printf("Enter Elements of Second array :\n");
    for(int i=0;i<n2;i++){
        scanf("%d",&arr2[i]);
    }

    int resunion[100],k=0;
    for(int i=0;i<n1;i++){
        int flag=0;
        for(int j=0;j<k;j++){
            if(arr1[i]==resunion[j]){
                flag=1;
                break;
            }
        }
        if(flag==0){
            resunion[k]=arr1[i];
            k++;
        }
    }
    
    for(int i=0;i<n2;i++){
        int flag=0;
        for(int j=0;j<k;j++){
            if(arr2[i]==resunion[j]){
                flag=1;
                break;
            }
        }
        if(flag==0){
            resunion[k]=arr2[i];
            k++;
        }
    }

    int resintersection[100];
    int c=0;
    for(int i=0;i<n1;i++){
        int flag=0;
        for(int j=0;j<c;j++){
            if(resintersection[j]==arr1[i]){
                flag=1;   
                break;        
            }
        }
        if(flag==0){
            for(int j=0;j<n2;j++){
                if(arr1[i]==arr2[j]){
                    resintersection[c]=arr1[i];
                    c++;
                    break;
                }
            }
        }
    }

    printf("Union of Arrays is :\n");
    for(int i=0;i<k;i++){
        printf("%d ",resunion[i]);
    }
    printf("\n");  

    printf("Intersection of Arrays is :\n");
    for(int i=0;i<c;i++){
        printf("%d ",resintersection[i]);
    }   
    printf("\n"); 
    
    free(arr1);
    free(arr2);
    return 0;
}