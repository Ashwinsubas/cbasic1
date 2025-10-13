#include <stdio.h>

// Function declarations (prototypes)
void getArray(int arra[], int *limit);
void displayArray(int arra[], int limit);

int main()
{
    int arra[100], limit;

    getArray(arra, &limit);
    displayArray(arra, limit);

    return 0;
}

void getArray(int arra[], int *limit)
{
    int i;
    printf("Enter the limit: ");
    scanf("%d", limit);

    printf("Enter the array elements: ");
    for (i = 0; i < *limit; i++)
    {
        scanf("%d", &arra[i]);
    }
}

void displayArray(int arra[], int limit)
{
    int i;
    printf("Array elements are: ");
    for (i = 0; i < limit; i++)
    {
        printf("%d ", arra[i]);
    }
}
