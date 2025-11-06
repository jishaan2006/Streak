// 20. Maximum Product Subarray
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

    int max_product=1;
    
    for(int i=0;i<n;i++){
        int product=1;
        for(int j=i;j<n;j++){
             product = product * arr[j];
            if (product > max_product)
                max_product = product;
        }
    }
    printf("Maximum product subarray = %d\n", max_product);
    return 0;
        
}
