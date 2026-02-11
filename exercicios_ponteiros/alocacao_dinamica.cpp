#include <iostream>
#include <iterator> 

using namespace std;

int main() {
    int n;
    cin >> n;
    int *vet = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> vet[i];
        cout << vet[i] << " ";
    }
    delete[] vet;
    return 0;
}