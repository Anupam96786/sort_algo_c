extern int * A;
void insert(int end)
{
    int i, j, t;
    for (i = 1; i < end+1; i++)
    {
        t = A[i];
        j = i - 1;
        while ((t < A[j] && (j >= 0)))
        {
            A[j + 1] = A[j];
            j = j - 1;
        }
        A[j + 1] = t;
    }
}