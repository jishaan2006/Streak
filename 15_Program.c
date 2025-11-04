/// 15. Missing number in array [1 to n]
#include <stdio.h>
int main()
{
    int n;
    int a[100];
    int sum = 0;
    int originalsum = 1;
    int missingnum = 0;
    printf("Enter number of elements:");
    scanf("%d", &n);
    printf("Enter %d elements(1 to n):\n", n);
    for (int j = 0; j < n; j++)
    {
        scanf("%d", &a[j]);
    }
    for (int i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }
    originalsum = ((n + 1) * (n + 2)) / 2;
    missingnum = originalsum - sum;
    printf("Missing Number is : %d", missingnum);
}
