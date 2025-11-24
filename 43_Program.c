//43. Snake pattern printing.
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

    printf("Snake pattern :\n");
    for(int i=0;i<n;i++){
        if(i%2==0){
            for(int j=0;j<m;j++){
                printf("%d ",arr[i][j]);
            }
        }
        else{
            for(int j=m-1;j>=0;j--){
                printf("%d ",arr[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}