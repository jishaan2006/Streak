//42. Print diagonals of a matrix
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

    printf("Diagonal :\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if(i==j || i+j==n-1){
                printf("%d ",arr[i][j]);
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }

}