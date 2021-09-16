#include <iostream>
#include <cmath>
using namespace std;

const float PI = 3.14159f;

int main(int argc, char *argv[])
{
float area, circu, radius;
cout<<"plase enter the radius: ";
cin>>radius;
area = PI*float(pow(radius,2));
circu = 2*PI*radius;
cout<<"the area of the circle is "<<area<<endl;
cout<<"the circu of the circle is "<<circu<<endl;

//system("PAUSE");
return EXIT_SUCCESS;
}
