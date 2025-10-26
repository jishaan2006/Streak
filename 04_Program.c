// 4. Sort an array of 0s, 1s and 2s (Dutch National Flag Problem)
#include <stdio.h>
int main()
{
    int arr[100], n;
    printf("Enter Number Of Elements in Array :\n");
    scanf("%d", &n);
    printf("Enter %d Elements :\nValid Inputs => 0,1,2 only\n", n);

    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++){
        if (arr[i] != 0 && arr[i] != 1 && arr[i] != 2){
            printf("Invalid Inputs, only 0,1,2 allowed\n");
            return 0;
        }
    }
    
    int start = 0;
    int mid = 0;
    int end = n - 1;
    while (mid <= end){
        if (arr[mid] == 0){
            int temp = arr[start];
            arr[start] = arr[mid];
            arr[mid] = temp;
            start++;
            mid++;
        }
        else if (arr[mid] == 2){
            int temp = arr[end];
            arr[end] = arr[mid];
            arr[mid] = temp;
            end--;
        }
        else{
            mid++;
        }
    }

    printf("Sorted Elements :\n");
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}