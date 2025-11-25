//44. Boundary traversal of matrix
#include<stdio.h>
int main(){
    int n, m;
    printf("Enter rows and columns: ");
    scanf("%d %d", &n, &m);

    int arr[n][m];
    printf("Enter elements:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Boundary traversal of matrix :\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i==0 ||j==0||i==n-1||j==m-1){
                printf("%d ",arr[i][j]);
            }
            else{
                printf("   ");
            }
        }   
        printf("\n");
    }
    return 0;
}