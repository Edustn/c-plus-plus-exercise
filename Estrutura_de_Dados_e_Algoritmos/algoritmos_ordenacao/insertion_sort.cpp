#include <stdio.h>
#include <iostream>

using namespace std;

void insertion_sort(int lista[], int tamanho)
{
    for (int i = 1; i < tamanho; i++)
    {
        int key = lista[i];
        int j = i - 1;
        while (j >= 0 && lista[j] > key)
        {
            lista[j + 1] = lista[j];
            j--;
        }
        lista[j + 1] = key;
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
    insertion_sort(lista, tamanho);
    cout << "Lista ordenada: ";
    return 0;

}