#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float n;
    float largest;
    float x, lowest = 0;
    cout << "input a number : ";
    cin >> n;
    largest = n;

    while (((n-x*x)>0.0001) || ((n-x*x)<-0.0001)) 
    {
        x = (largest+lowest)/2;
	if ((x*x)>n)
        {
            largest = x;
        }
        else
        {
            lowest = x;
        }
    }
    printf("%.2f/n", x);
    return 0;
}
