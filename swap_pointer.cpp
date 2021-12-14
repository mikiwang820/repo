#include <iostream>
using namespace std;

void swap(int *num1, int *num2, int *sumPtr);

int main(int argc, char *argv[])
{
    int sum;
    int var1 = 2;
    int var2 = 3;
    swap(&var1, &var2, &sum);
    return 0;
}

void swap(int *num1, int *num2, int *sumPtr)
{
    int buffer;
    cout << "before swap: " << "var1 = " << *num1 << ", var2 = " << *num2 << endl;
    buffer = *num1;
    *num1 = *num2;
    *num2 = buffer;
    cout << "after swap: " << "var1 = " << *num1 << ", var2 = " << *num2 << endl;
    *sumPtr = *num1 + *num2;
    cout << "sum = " << *sumPtr << endl;
}