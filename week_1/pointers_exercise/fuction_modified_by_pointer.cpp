#include <iostream>
using namespace std;

void increment(int *p)
{
    if (p != nullptr)
    {
        (*p)++;
    }
}

int main()
{
    int value = 5;
    int p = value;

    cout << "Value before increment: " << p << endl;
    increment(&p);
    cout << "Value after increment: " << p << endl;
    return 0;
}