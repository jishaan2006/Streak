//41. Set entire row and column to 0 if any element is 0
#include<stdio.h>
int main(){
    int n,m;
    printf("Enter rows and columns:");
    scanf("%d %d",&n,&m);
    int arr[n][m];
    printf("Enter elements:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    int rows[n],cols[m];
    for(int i=0;i<n;i++){
        rows[i]=1;
    }
    for(int j=0;j<m;j++){
        cols[j]=1;
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==0){
                rows[i]=0;
                cols[j]=0;
            }
        }
    }

    for(int i=0;i<n;i++){
        if(rows[i]==0){
            for(int j=0;j<m;j++){
                arr[i][j]=0;
            }
        }
    }
    
    for(int j=0;j<m;j++){
        if(cols[j]==0){
            for(int i=0;i<n;i++){
                arr[i][j]=0;
            }
        }
    }

    printf("Output matrix:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}


