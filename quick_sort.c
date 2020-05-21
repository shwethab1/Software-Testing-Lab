// An iterative implementation of quick sort
#include <stdio.h>

// A utility function to swap two elements
void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

/* This function is same in both iterative and recursive*/
int partition(int arr[], int l, int h)
{
    int x = arr[h];
    int i = (l - 1), j;
    for (j = l; j <= h - 1; j++)
    {
        if (arr[j] <= x)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[h]);
    return (i + 1);
}

/* A[] --> Array to be sorted, l  --> Starting index, h  --> Ending index */

void quickSortIterative(int arr[], int l, int h)
{
    // Create an auxiliary stack
    int stack[10], p;

    // initialize top of stack
    int top = -1;

    // push initial values of l and h to stack
    stack[++top] = l;
    stack[++top] = h;

    // Keep popping from stack while is not empty
    while (top >= 0)
    {
        // Pop h and l
        h = stack[top--];
        l = stack[top--];
        // Set pivot element at its correct position in sorted array
        p = partition(arr, l, h);

        // If there are elements on left side of pivot, then push left
        // side to stack
        if (p - 1 > l)
        {
            stack[++top] = l;
            stack[++top] = p - 1;
        }

        // If there are elements on right side of pivot, then push right
        // side to stack
        if (p + 1 < h)
        {
            stack[++top] = p + 1;
            stack[++top] = h;
        }
    }
}
// Driver program to test above functions
int main()
{
    int arr[20], n, i;
    printf("Enter the size of the array");
    scanf("%d", &n);
    printf("Enter %d elements", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    quickSortIterative(arr, 0, n - 1);
    printf("Elements of the array are;");
    for (i = 0; i < n; i++)
        printf("%d", arr[i]);
    return 0;
}
