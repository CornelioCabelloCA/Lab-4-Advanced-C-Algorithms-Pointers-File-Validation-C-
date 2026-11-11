#include <stdio.h>

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

void partition_recursive(int arr[], int left, int right)
{
    int temp;

    if (left >= right)
    {
        return;
    }

    while (left < right && arr[left] % 2 != 0)
    {
        left++;
    }

    while (left < right && arr[right] % 2 == 0)
    {
        right--;
    }

    if (left >= right)
    {
        return;
    }

    temp = arr[left];
    arr[left] = arr[right];
    arr[right] = temp;

    partition_recursive(arr, left + 1, right - 1);
}

int main(void)
{
    int arr[10];
    int size;
    int choice;
    int i;

    printf("Enter array size (1 to 10): ");

    if (scanf("%d", &size) != 1 || size < 1 || size > 10)
    {
        printf("Invalid size.\n");
        return 1;
    }

    for (i = 0; i < size; i++)
    {
        printf("Enter number %d: ", i + 1);

        if (scanf("%d", &arr[i]) != 1)
        {
            printf("Invalid number.\n");
            return 1;
        }
    }

    printf("1. Iterative\n");
    printf("2. Recursive\n");
    printf("Enter choice: ");

    if (scanf("%d", &choice) != 1)
    {
        printf("Invalid choice.\n");
        return 1;
    }

    if (choice == 1)
    {
        partition_iterative(arr, size);
    }
    else if (choice == 2)
    {
        partition_recursive(arr, 0, size - 1);
    }
    else
    {
        printf("Invalid choice.\n");
        return 1;
    }

    printf("Partitioned array: ");

    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}
