#include <stdio.h>
#include <math.h>

int prime(int number)
{
    if (number <= 1)
    {
        return 0;
    }

    if (number == 2)
    {
        return 1;
    }

    for (int i = 2; i <= sqrt(number); i++)
    {
        if (number % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

void findSum(int arr[], int size)
{
    int total = 0;
    for (int i = 0; i < size; i++)
    {
        total += arr[i];
    }
    printf("Total sum of all element is %d", total);
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++)
    {
        if (prime(arr[i]))
        {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}