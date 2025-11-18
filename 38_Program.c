//38. Search in a row-wise and column-wise sorted matrix
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

    int key;
    printf("Enter element to search :");
    scanf("%d",&key);

    int i=0;
    int j=m-1;
    int flag=0;
    while(i<n && j>=0) {
        if(arr[i][j]==key){
            printf("element found at position(%d, %d)\n", i, j);
            flag=1;
            break;
        }
        else if(arr[i][j]>key) {
            j--;
        }
        else{
            i++;
        }
    }
    if(!flag) {
        printf("element not found\n");
    }
    return 0;
}