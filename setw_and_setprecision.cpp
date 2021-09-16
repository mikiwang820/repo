#include <iostream>
#include <iomanip>
using namespace std;

const double PI = 3.141592653;

int main(int argc, char *argv[])
{
cout<<setprecision(10);
cout<<setw(12)<<PI*(-1)<<"\n";
cout<<setw(12)<<PI*100<<"\n";
cout<<setw(12)<<PI*1000<<"\n";
//system("PAUSE");
return EXIT_SUCCESS;
}
