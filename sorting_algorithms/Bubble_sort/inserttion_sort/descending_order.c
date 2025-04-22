#include <stdio.h>
// Descending order
void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
}

void insertionSort(int a[], int n)
{
    int key, j;
    // loop for number of passes
    for (int i = 0; i <= n - 1; i++)
    {
        // loop for each pass
        key = a[i];
        j = i - 1;
        // loop for comparison
        while (j >= 0 && a[j] < key)
        {
            a[j + 1] = a[j];
            j--;
        }

        a[j + 1] = key;
    }
}

int main()
{
    int a[] = {12, 54, 65, 7, 23, 9};

    int n = 6;
    //printing array before sorting 
    printArray(a, n);

    insertionSort(a, n);
    // printing array after sorting 
    printArray(a, n);
    return 0;
}
