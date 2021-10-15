#include <iostream>
using namespace std;

void swap(int &, int &);
int main(int argc, char *argv[])
{
int a = 2;
int b = 4;
cout<<"a stored at "<<&a<<" is "<<a<<endl;
cout<<"b stored at "<<&b<<" is "<<b<<endl;
swap(a, b);
cout<<"after swap function..."<<endl;
cout<<"a stored at "<<&a<<" is "<<a<<endl;
cout<<"b stored at "<<&b<<" is "<<b<<endl;
return 0;
}

void swap(int &num1, int &num2)
{
int buffer;
buffer = num1;
//cout<<"buffer: "<<buffer<<endl;
num1 = num2;
//cout<<"num1: "<<num1<<endl;
num2 = buffer;
//cout<<"num2: "<<num2<<endl;
}
