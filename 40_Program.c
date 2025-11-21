//40. Matrix multiplication
#include<stdio.h>
int main(){
    int n1, m1;
    printf("Enter rows and columns for first matrix : ");
    scanf("%d %d", &n1, &m1);

    int arr1[n1][m1];
    printf("Enter elements:\n");
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < m1; j++) {
            scanf("%d", &arr1[i][j]);
        }
    }

    int n2, m2;
    printf("Enter rows and columns for second matrix : ");
    scanf("%d %d", &n2, &m2);

    int arr2[n2][m2];
    printf("Enter elements:\n");
    for (int i = 0; i < n2; i++) {
        for (int j = 0; j < m2; j++) {
            scanf("%d", &arr2[i][j]);
        }
    }

    if(m1!=n2){
        printf("Invalid order of matrix.\nCannot multiply.");
    }else{
        int res[n1][m2];
        int c=0;
        int sum=0;
        for(int i=0;i<n1;i++){
            for(int j=0;j<m2;j++){
                for(int k=0;k<m1;k++){
                    sum+=arr1[i][k]*arr2[k][j];
                }
                res[i][j]=sum;
                sum=0;
            }
        }
        
        printf("Matrix Multiplication :\n");
        for(int i=0;i<n1;i++){
            for(int j=0;j<m2;j++){
                printf("%d ",res[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}