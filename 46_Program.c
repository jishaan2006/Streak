//47. Count islands (DFS on matrix)
#include <stdio.h>

int main() {
    int n,m;
    printf("Enter rows and columns: ");
    scanf("%d %d", &n, &m);
    
    int matrix[100][100];
    printf("Enter elements:\n");
    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            scanf("%d",&matrix[i][j]);
        }
    }

    int target;
    printf("Enter target: ");
    scanf("%d",&target);

    int left=0;
    int right=n*m-1;
    int found=0;  

    while(left<=right){
        int mid=left+(right-left)/2;
        int row=mid/m;    
        int col=mid%m;    

        int value=matrix[row][col];

        if(value==target){
            found=1;
            break;
        }
        else if(value<target){
            left=mid+1;
        }
        else{
            right=mid-1;
        }
    }

    if(found)
        printf("Found\n");
    else
        printf("Not Found\n");
    return 0;
}