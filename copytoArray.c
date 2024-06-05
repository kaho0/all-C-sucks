#include <stdio.h>

void swapArrays(int *a, int *b, int size) {
    for (int i = 0; i < size; i++) {
        int temp = *(a + i);
        *(a + i) = *(b + i);
        *(b + i) = temp;
    }
}

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr1[n], arr2[n];

    printf("Enter elements of the first array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter elements of the second array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

    swapArrays(arr1, arr2, n);

    printf("After swapping, first array elements are:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\nSecond array elements are:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr2[i]);
    }

    return 0;
}
