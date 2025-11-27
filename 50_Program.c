//50. Boolean Matrix problem (set row/column to 1 if any element is 1)
#include<stdio.h>
int main(){
    int n,m;
    printf("Enter number of rows and coulmns :");
    scanf("%d %d",&n,&m);

    int arr[n][m];
    printf("Enter elements :\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    int row[n];
    int column[m];

    for(int i=0;i<n;i++){
        row[i]=0;
    }

    for(int i=0;i<m;i++){
        column[i]=0;
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==1){
                row[i]=1;
                column[j]=1;
            }
        }
    }

    for(int i=0;i<n;i++){
        if(row[i]==1){
            for(int j=0;j<m;j++){
                arr[i][j]=1;
            }
        }
    }

    for(int j=0;j<m;j++){
        if(column[j]==1){
            for(int i=0;i<n;i++){
                arr[i][j]=1;
            }
        }
    }

    printf("Output matrix :\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}