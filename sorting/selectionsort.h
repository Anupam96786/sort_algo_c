extern int *A;
void selectsort(int n)
{
    int i, j, t;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n+1; j++)
        {
            if (A[j] < A[i])
            {
                t = A[i];
                A[i] = A[j];
                A[j] = t;
            }
        }
    }
}