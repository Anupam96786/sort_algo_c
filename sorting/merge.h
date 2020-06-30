#include <stdlib.h>
extern int * A;
void merge_sort(int start, int mid, int end, int len)
{
    int l1 = start, l2 = mid + 1, i = start;
    int * aux;
    aux = (int *)malloc(len * sizeof(int));
    while (l1 <= mid && l2 <= end)
    {
        if (A[l1] > A[l2])
            aux[i++] = A[l2++];
        else
            aux[i++] = A[l1++];
    }
    while (l1 <= mid)
        aux[i++] = A[l1++];
    while (l2 <= end)
        aux[i++] = A[l2++];
    for (i = start; i <= end; i++)
        A[i] = aux[i];
    free(aux);
}
void merge(int start, int end, int len)
{
    int mid;
    if (start < end)
    {
        mid = (start + end) / 2;
        merge(start, mid, len);
        merge(mid + 1, end, len);
        merge_sort(start, mid, end, len);
    }
}
