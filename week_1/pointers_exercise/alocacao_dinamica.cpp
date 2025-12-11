#include <iostream>
using namespace std;

int main()
{
    int *p = new int;
    *p = 50;
    cout << "Value pointed to by p: " << *p << endl;
    delete p;
    cout << "Memory allocated to p has been freed." << *p << endl;
    return 0;
}