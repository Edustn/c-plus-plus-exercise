#include <stdio.h>
#include <iostream>
using namespace std;

void bubble_sort(int lista[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1; j++)
            if (lista[j] > lista[j + 1])
            {
                int temp = lista[j];
                lista[j] = lista[j + 1];
                lista[j + 1] = temp;
                break;
            }
    }
    for (int i = 0; i < n; i++)
    {
        cout << lista[i] << " ";
    }
    cout << endl;
    return;
}

int main()
{
    int lista[] = {10, 30, 20};
    bubble_sort(lista, 3);
    return 0;
}