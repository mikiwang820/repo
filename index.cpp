#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[])
{
cout<<"計數\t"<<"2的n次方\n";
double count = 0;
double answer;
while(count<10)
{
	count++;
	cout<<setw(3)<<count<<"\t";
	answer = pow(2, count);
	cout<<setw(6)<<answer<<endl;
}
//system("PAUSE");
return EXIT_SUCCESS;
}
