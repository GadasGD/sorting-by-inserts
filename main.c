#include <stdio.h>

void InsertionSort(int arr[], int size);

int main()
{
    int arr[] = {2, 15, 21, 7, 19, 6, 10, 17, 21, 5};
    InsertionSort(arr, sizeof(arr) / 4);

    printf("{");
    for (int i = 0; i < sizeof(arr) / 4; i++)
    {
        if(i != sizeof(arr) / 4 - 1)
        {    
            printf("%d, ", arr[i]);
        }
        else
        {
            printf("%d", arr[i]);
        }
    }
    printf("} \n");

    return 0;
}

void InsertionSort(int arr[], int size)
{
    int newElement, location;

    for (int i = 1; i < size; i++)
    {
        newElement = arr[i];
        location = i - 1;
        while (location >= 0 && arr[location] > newElement)
        {
            arr[location + 1] = arr[location];
            location--;
        }
        arr[location + 1] = newElement;
    }
}