int MergeSort(int A[], int left, int right)
{
    if (left < right)
    {
        int mid = (left + right) / 2;
        MergeSort(A, left, mid);
        MergeSort(A, mid + 1, right);
        return 0;
    }
    return -1;
}