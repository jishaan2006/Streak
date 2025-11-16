//36. Transpose of a matrix
#include<stdio.h>
int main(){
    int n,m;
    printf("Enter number of rows and columns :");
    scanf("%d %d",&n,&m);
    
    printf("Enter elements :\n");
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    printf("Transpose of matrix :\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }
}