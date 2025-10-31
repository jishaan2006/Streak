//9. Check if array is sorted and rotated
#include <stdio.h>
int sort_rotated(int arr[], int n) {
    int count = 0;

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            count++;
        }
    }

    if (arr[n - 1] > arr[0]) {
        count++;
    }

    if (count == 1){
        return 1;
    }
    else{
        return 0;
    }
}

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    if (sort_rotated(arr, n)){
        printf("Array is sorted and rotated\n");
    }
    else{
        printf("Array is not sorted and rotated\n");
    }
    return 0;
}
