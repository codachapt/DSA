#include<stdio.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n], even[n], odd[n], i, j = 0, k = 0;

    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0) {
            even[j] = arr[i];
            j++;
        } else {
            odd[k] = arr[i];
            k++;
        }
    }

    printf("Even numbers are: ");
    for (i = 0; i < j; i++)
        printf("%d ", even[i]);

    printf("\nOdd numbers are: ");
    for (i = 0; i < k; i++)
        printf("%d ", odd[i]);

    printf("\n");

    return 0;
}