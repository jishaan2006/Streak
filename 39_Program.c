//39. Spiral traversal of a matrix
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

    int top=0,bottom=n-1;
    int left=0,right=m-1;

    while(top<=bottom && left<=right){
        
        for(int i=left;i<=right;i++){
            printf("%d ",arr[top][i]);
        }
        top++;

        for(int i=top;i<=bottom;i++){
            printf("%d ",arr[i][right]);
        }
        right--;

        if(top<=bottom){
            for (int i=right;i>=left;i--){
                printf("%d ", arr[bottom][i]);
            }
            bottom--;
        }
        
        if(left<=right){
            for(int i=bottom;i>=top;i--){
                printf("%d ", arr[i][left]);
            }
            left++;
        }
    }
}
