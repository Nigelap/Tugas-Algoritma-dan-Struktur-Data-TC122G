#include <stdio.h>
#include <stdlib.h>
//Selection Sort
int SelectionSort (int array[], int n)
{
    int i, j, temp, tukar;
    for (i = 0; i < (n-1); i++)
    {
        temp = i;
        for (j = i + 1; j < n; j++)
        {
            if (array[temp] > array[j])
            {
                temp = j;
            }
        }
        if (temp != i)
        {
            tukar = array[i];
            array[i] = array[temp];
            array[temp] = tukar;
        }
    }
}

int main()
{
    int array [100], n, i, j;

    printf("Masukkan banyaknya elemen : ");
    scanf("%d", &n);
    printf("Masukkan angka :\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    SelectionSort (array, n);

    printf("Hasil Pengurutannya :\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}
