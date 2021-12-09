#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int array[] = {-3, 6, 5, -1, 0, 9, 3};
    int minimum, idx = 0;
    int count = (sizeof(array)/sizeof(array[0]));
    cout<<"the size of array is: "<<count<<endl;
    cout<<"the unsorted array is: ";
    for (int i=0; i<count; i++)
    {
        cout<<array[i]<<" ";
    }
    //selection sort
    // for 0-5
    for(int i=0; i<(count-1); i++)
    {
        idx = i;
        minimum = array[i];
        // find the minimum in the array
        for(int i1=i; i1<count; i1++)
        {
            if (array[i1]<minimum)
            {
                minimum = array[i1];
                idx = i1;
            }
        }
       
        array[idx]= array[i];
        array[i] = minimum;
    }
    cout<<"\nthe sortted array is: ";
    for (int i2=0; i2<count; i2++)
    {
        cout<<array[i2]<<" ";
    }
    cout<<"\n";
    return 0;
}