int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}
float findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int size = nums1Size + nums2Size;
    int arr[size];

    for (int i = 0; i < nums1Size; i++)
        arr[i] = nums1[i];

    for (int i = 0; i < nums2Size; i++)
        arr[nums1Size + i] = nums2[i];

    qsort(arr, size, sizeof(int), compare);

    if (size % 2 == 0)
        return (arr[size / 2 - 1] + arr[size / 2]) / 2.0;
    else
        return arr[size / 2];
}