#include <iostream>
using namespace std;

int main(int agrc, char *argv[])
{
int count = 1, output = 1;
cout<<"計數\t"<<"階乘\n";
do
{
	output = output*count;
	cout<<count<<"\t";
	cout<<output<<endl;
}
while(count++<10);
return 0;
}
