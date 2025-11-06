// 19. Merge two sorted arrays without using extra space
#include <stdio.h>
int main()
{
    // m[1,2,4,5]
    // n[3,7,9]
    int n, m;
    printf("Enter number of elements for 1st array : ");
    scanf("%d", &n);
    int arr1[n];
    printf("Enter %d Elements(Sorted) :\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("Enter number of elements for 2nd array : ");
    scanf("%d", &m);
    int arr2[m];
    printf("Enter %d Elements(Sorted) :\n", m);
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &arr2[i]);
    }

    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = m - 1; j >= 0; j--)
        {
            if (arr1[i] > arr2[0])
            {
                int temp = arr1[i];
                arr1[i] = arr2[j];
                arr2[j] = temp;

                for (int i = 0; i < m; i++)
                {
                    for (int j = i + 1; j < m; j++)
                    {
                        if (arr2[i] > arr2[j])
                        {
                            int temp = arr2[j];
                            arr2[j] = arr2[i];
                            arr2[i] = temp;
                        }
                    }
                }
            }
        }
    }
    printf("Merged arrays:\n");
    printf("Array 1: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr1[i]);
    }

    printf("\nArray 2: ");
    for (int i = 0; i < m; i++)
    {
        printf("%d ", arr2[i]);
    }

    return 0;
}