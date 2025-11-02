//11. Rearrange array in alternating positive & negative items
#include <stdio.h>
void rearrange(int arr[],int n) {
    int pos[100],neg[100];
    int p=0,ne=0;

    for (int i=0;i<n;i++) {
        if (arr[i]>= 0)
            pos[p++]=arr[i];
        else
            neg[ne++]=arr[i];
    }

    int i=0,j=0,k=0;

    while (i<p && j<ne) {
        arr[k++]=pos[i++];
        arr[k++]=neg[j++];
    }


    while(i<p){
        arr[k++]=pos[i++];
    }


    while (j<ne){
        arr[k++]=neg[j++];
    }
}

int main() {
    int n;
    int arr[100];

    printf("Enter number of elements :\n");
    scanf("%d",&n);

    printf("Enter elements:\n");
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    rearrange(arr, n);

    printf("Rearranged array alternating positive and negative elements :\n");
    for (int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}