#include <stdio.h>

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {6, 7, 8, 9, 10};
    int sum[5], i;

    for(i = 0; i < 5; i++) {
        sum[i] = arr1[i] + arr2[i];
    }

    printf("Sum of arrays: ");
    for(i = 0; i < 5; i++) {
        printf("%d ", sum[i]);
    }
    printf("\n");
    return 0;
}
