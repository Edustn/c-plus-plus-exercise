#include <iostream>
using namespace std;

void swap(int *a, int *b) {
   int temp = *a;
   *a = *b;
   *b = temp;
   cout << "Valores trocados: a = " << *a << ", b = " << *b << endl;
}

int main() {
    int a = 10, b = 20;
    swap(&a, &b);
    return 0;
}
