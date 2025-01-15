#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int max = arr[0], i;

    for(i = 1; i < 5; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }

    printf("Maximum value: %d\n", max);
    return 0;
}
