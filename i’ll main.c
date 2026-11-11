int main(void)
{
    int original[] = {2, 7, 4, 9, 6, 3};
    int iterativeArray[6];
    int recursiveArray[6];
    int size = 6;
    int i;

    for (i = 0; i < size; i++)
    {
        iterativeArray[i] = original[i];
        recursiveArray[i] = original[i];
    }

    partition_iterative(iterativeArray, size);

    printf("Iterative: ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", iterativeArray[i]);
    }
    printf("\n");

    partition_recursive(recursiveArray, 0, size - 1);

    printf("Recursive: ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", recursiveArray[i]);
    }
    printf("\n");

    return 0;
}
