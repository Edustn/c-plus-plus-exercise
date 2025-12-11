#include <iostream>
using namespace std;

int main()
{
    int x = 5;
    int* p = &x;

    * p = 20;
    x = *p;
    cout << "Modified value of x: " << x << endl;
}
