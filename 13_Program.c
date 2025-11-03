// 13. Find all pairs with a given sum
#include<stdio.h>
int main(){
    int a[100],n,s;
    printf("Enter number of Elements :");
    scanf("%d",&n);
    printf("Enter %d Elements :\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter value of sum :");
    scanf("%d",&s);

   int found = 0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]+a[j]==s){
                printf("Pair found: (%d, %d) at indices (%d, %d)\n", a[i], a[j], i, j);
                found = 1;
            }
        }
    }
if(found==0)
    printf("No pairs found with the given sum.\n");
    return 0;
}