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
for (int i1=0; i1<count; i1++)
{
	for (int point=0; point<(count-1); point++)
	{
		if (array[point]>array[(point+1)])
		{
			temp = array[point];
			array[point] = array[point+1];
			array[(point+1)] = temp;
		
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
