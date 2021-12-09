#include <iostream>
#include <typeinfo>
using namespace std;

int main(int argc, char *argv[])
{
int array[] = {-3, 6, 5, -1, 0, 9, 3};
int temp;
int count = (sizeof(array)/sizeof(array[0]));
cout<<"the size of array is: "<<count<<endl;
cout<<"the unsorted array is: ";
for (int i=0; i<count; i++)
{
cout<<array[i]<<" ";
}
for (int i1=0; i1<(count-1); i1++) //0-6
{
	for (int point=i1; point<count; point++) //0: 1-6, 1:2-6, ... , 6: 7 
	{
		if (array[i1]>array[point])
		{
			temp = array[i1];
			array[i1] = array[point];
			array[point] = temp;
		
		}
	}
}
cout<<"\nthe sortted array is: ";
for (int i2=0; i2<count; i2++)
{
cout<<array[i2]<<" ";
}
cout<<"\n";

return 0;
}
