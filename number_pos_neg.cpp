#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
short input; //allocate 2 bytes
char inkey; //allocate 1 byte
int zero, pos, neg = 0;
do
{
	cout<<"please input a number between -32768 and 32767: ";
	cin>>input;
	if (input<0)
	{
		neg++;
	}
	else if (input>0)
	{
		pos++;
	}
	else
	{
		zero++;
	}
	cout<<"Please key in Y or y to continue, otherwise press N or n: ";
	cin>>inkey;
}
while(inkey=='Y' || inkey=='y');
cout<<"# of zero: "<<zero<<endl;
cout<<"# of postive number: "<<pos<<endl;
cout<<"# of negative number: "<<neg<<endl;
//system(PAUSE);
return EXIT_SUCCESS;
}
