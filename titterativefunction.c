void partition_iterative(int arr[], int size)
{
    int left = 0;
    int right = size - 1;
    int temp;

    while (left < right)
    {
        while (left < right && arr[left] % 2 != 0)
        {
            left++;
        }

        while (left < right && arr[right] % 2 == 0)
        {
            right--;
        }

        if (left < right)
        {
            temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;

            left++;
            right--;
        }
    }
}
