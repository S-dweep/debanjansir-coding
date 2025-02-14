#include <stdio.h>
void merge(int *arr, int, int, int);
void merge_sort(int *arr, int, int);
void main()
{
    int i, n;
    printf("\n Enter no. of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("\n Enter elements of the array: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    merge_sort(arr, 0, n - 1);
    printf("\n The sorted array: \n");
    for (i = 0; i < n; i++)
        printf(" %d\t", arr[i]);
}
void merge(int *arr, int beg, int mid, int end)
{
    int i = beg, j = mid + 1, index = beg, temp[end], k;
    while ((i <= mid) && (j <= end))
    {
        if (arr[i] < arr[j])
        {
            temp[index] = arr[i];
            i++;
        }
        else
        {
            temp[index] = arr[j];
            j++;
        }
        index++;
    }
    if (i > mid)
    {
        while (j <= end)
        {
            temp[index] = arr[j];
            j++;
            index++;
        }
    }
    else
    {
        while (i <= mid)
        {
            temp[index] = arr[i];
            i++;
            index++;
        }
    }
    for (k = beg; k < index; k++)
        arr[k] = temp[k];
}
void merge_sort(int *arr, int beg, int end)
{
    int mid;
    if (beg < end)
    {
        mid = (beg + end) / 2;
        merge_sort(arr, beg, mid);
        merge_sort(arr, mid + 1, end);
        merge(arr, beg, mid, end);
    }
}