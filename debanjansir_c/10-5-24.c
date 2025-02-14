#include<stdio.h>
#include<stdlib.h>
void sort(int *arr, int n) 
{
    int i,j,temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) 
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: %s <integer1> <integer2> ... <integerN>\n", argv[0]);
        return 1;
    }

    int i, n = argc - 1;
    int *arr = (int *)malloc(n * sizeof(int));

    // Convert command line arguments to integers
    for (i = 0; i < n; i++) {
        arr[i] = atoi(argv[i + 1]);
    }

    // Sort the array
    bubbleSort(arr, n);

    // Print the sorted array
    printf("Sorted array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Free dynamically allocated memory
    free(arr);

    return 0;
}

