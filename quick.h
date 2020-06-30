extern int * A;
int partition(int start, int end)
{
    int pivot = A[end];
    int i, t;
    int pi = start;
    for (i = start; i < end; i++)
    {
        if (A[i] <= pivot)
        {
            t = A[i];
            A[i] = A[pi];
            A[pi] = t;
            pi++;
        }
    }
    t = A[pi];
    A[pi] = A[end];
    A[end] = t;
    return pi;
}
void quick(int start, int end)
{
    if (start < end)
    {
        int pi = partition(start, end);
        quick(start, pi - 1);
        quick(pi + 1, end);
    }
}