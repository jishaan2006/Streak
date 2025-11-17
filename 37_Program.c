//37. Rotate matrix by 90 degrees clockwise
#include <stdio.h>
int main() {
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

    printf("Rotated matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = n - 1; j >= 0; j--) {
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }

    return 0;
}
