#include <time.h>
#include <iostream>

using namespace std;

void insertion_sort(int[], int);
void quickSort(int[], int, int);
int partition(int[], int, int);
void exch(int[], int, int);
void bubbleSort(int a[], int lenght);
void shell(int[], int);
void bucket();
void merge();
void heap();
void index();
#define ARRAY_SIZE 20

void main()
{
    int array[ARRAY_SIZE];

    srand(time(NULL));
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        array[i] = rand() % 100 + 10;
    }

    for (int elem : array)
        cout << elem << ' ';
    cout << endl;

    //insertion_sort(array, ARRAY_SIZE);

    //quickSort(array, 0, 19);
    //bubbleSort(array, ARRAY_SIZE);
    shell(array, 20);
    for (int elem : array)
        cout << elem << ' ';
}

void insertion_sort(int arr[], int length)
{
    int j, temp;

    for (int i = 0; i < length; i++)
    {
        j = i;

        while (j > 0 && arr[j] < arr[j - 1])
        {
            temp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = temp;
            j--;
        }
    }
}

void quickSort(int a[], int lo, int hi)
{
    if (hi <= lo)
        return;
    int j = partition(a, lo, hi);
    quickSort(a, lo, j - 1);
    quickSort(a, j + 1, hi);
}
void exch(int array[], int i, int j)
{
    int tmp;
    tmp = array[i];
    array[i] = array[j];
    array[j] = tmp;
}

int partition(int a[], int lo, int hi)
{
    int i = lo, j = hi + 1;
    while (true)
    {
        while (a[++i] < a[lo])
        {
            if (i == hi)
                break;
        }
        while (a[lo] < a[--j])
        {
            if (j == lo)
                break;
        }
        if (i >= j)
            break;
        exch(a, i, j);
    }
    exch(a, lo, j);
    return j;
}
void bubbleSort(int a[], int lenght)
{
    bool swapped = true;
    int j = 0;
    int tmp;
    while (swapped)
    {
        swapped = false;
        j++;
        for (int i = 0; i < lenght - j; i++)
        {
            if (a[i] > a[i + 1])
            {
                tmp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = tmp;
                swapped = true;
            }
        }
    }
}

void shell(int arr[], int n)
{
    int distance, i, j, temp;

    for (distance = 3; distance > 0; distance /= 2)

        for (i = distance; i < n; i++)

            for (j = i - distance; j >= 0 && arr[j] > arr[j + distance]; j -= distance)
            {
                temp = arr[j];

                arr[j] = arr[j + distance];

                arr[j + distance] = temp;
            }
}

void tagSort(int a[])
{
}