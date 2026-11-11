#include <stdio.h>

/* Put partition_iterative() here. */

/* Put partition_recursive() here. */

int main(void)
{
    int arr[] = {2, 7, 4, 9, 6, 3};
    int size = 6;
    int i;

    partition_iterative(arr, size);

    printf("Partitioned array: ");

    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}
