#include <stdio.h>
#include <iostream>

using namespace std;

void selection_sort(int lista[], int tamanho)
{
    for (int i = 0; i < tamanho - 1; i++)
    {
        int min_index = i;
        for (int j = min_index; j < tamanho; j++)
        {
            if (lista[j] < lista[min_index])
                min_index = j;
        }
        if (lista[i] > lista[min_index])
        {
            int temp = lista[i];
            lista[i] = lista[min_index];
            lista[min_index] = temp;
        }
    }
    for (int i = 0; i < tamanho; i++)
    {
        cout << lista[i] << " ";
    }
    cout << endl;
}

int main()
{
    int lista[] = {64, 25, 12, 22, 11};
    int tamanho = 5;
    selection_sort(lista, tamanho);
    cout << "Lista ordenada: ";
    return 0;
}