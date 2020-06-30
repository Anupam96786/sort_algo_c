extern int * A;
void bubblesort(int size)
{
    int t, i, j;
    for (i = 0; i < size+1; i++)
    {
        for (j = 0; j < size; j++)
        {
            if (A[j] > A[j + 1])
            {
                t = A[j];
                A[j] = A[j + 1];
                A[j + 1] = t;
            }
        }
    }
}
