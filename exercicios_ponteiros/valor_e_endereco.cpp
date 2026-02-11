#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int *p = &a;
    cout << "Valor de a: " << a << endl;
    cout << "Endereço de a: " << &a << endl;
    cout << "Valor de p: " << p << endl;
    cout << "Valor apontado por p: " << *p << endl;
}
