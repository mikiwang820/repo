#include <iostream>
#include <cstdlib> //the headline of rand
#include <ctime>
using namespace std;

int main(int argc, char *argv[])
{
srand(time(NULL));
//lowerbound+rand()%(upperbound-lowerbound+1)
int lowerbound, upperbound;
cout<<"please type in the lowerbound and upperbound: ";
cin>>lowerbound>>upperbound;
for (int i=0; i<3; i++){
cout<<lowerbound+rand()%(upperbound-lowerbound+1)<<endl;
}

//system("PAUSE");
return 0; 
}
