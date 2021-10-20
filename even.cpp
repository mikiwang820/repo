#include <iostream>
using namespace std;

bool even_number(int);

int main(int argc, char *argv[])
{
int a;
cout<<"please input a number: ";
cin>>a;
if (even_number(a))
{
cout<<"this is an even number\n";
}
else
{
cout<<"this is an odd number\n";
}
return EXIT_SUCCESS; 
}

bool even_number(int a)
{
if (a%2==0)
{
	return true;
}
else
{
return false;
}
}
