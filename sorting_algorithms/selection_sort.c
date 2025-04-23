#include <stdio.h>

void printArray(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }

    printf("\n");
}

void selectionSort(int *a, int n)
{
    int index_of_min;
    printf("running selection sort\n");
    // for number of passes
    for (int i = 0; i < n - 1; i++)
    {
        index_of_min = i;
        /// for number of comparisons
        for (int j = i; j < n; j++)
        {
            if (a[j] < a[index_of_min])
            {
                index_of_min = j;
            }
        }
        // swaping
        int temp = a[i];
        a[i] = a[index_of_min];
        a[index_of_min] = temp;
    }
}

int main()
{
    int a[] = {3, 5, 2, 13, 12};
    int n = 5;
    // printing element before sorting
    printArray(a, n);

    selectionSort(a, n);

    // printingg element after sorting
    printArray(a, n);
    return 0;
}
