#include <iostream>
using namespace std;

int calArray(int [][3]);

int main(int argc, char *argv[])
{
int eq[3][4] = {{7, 1, 3, 6}, {4, -1, 1, 1}, {5, 3, -2, 8}};
int dd[3][3] = {0};
int d, dx, dy, dz;
//cal d
for(int i=0; i<3; i++)
{
dd[i][0] = eq[i][0];
dd[i][1] = eq[i][1];
dd[i][2] = eq[i][2];
}
d = calArray(dd); 
cout << "d: " << d <<endl;
//cal dx
for(int i=0; i<3; i++)
{
dd[i][0] = eq[i][3];
dd[i][1] = eq[i][1];
dd[i][2] = eq[i][2];
}
dx = calArray(dd);
cout << "dx: " << dx << endl;
//cal dy
for(int i=0; i<3; i++)
{
dd[i][0] = eq[i][0];
dd[i][1] = eq[i][3];
dd[i][2] = eq[i][2];
}
dy = calArray(dd);
cout << "dy: " << dy << endl;
//cal dz
for(int i=0; i<3; i++)
{
dd[i][0] = eq[i][0];
dd[i][1] = eq[i][1];
dd[i][2] = eq[i][3];
}
dz = calArray(dd);
cout << "dz: " << dz << endl;
return 0;
}

int calArray(int array[][3])
{
int a = 0;
for(int i=0; i<3; i++)
{
a+=array[0][i]*array[1][(i+1)%3]*array[2][(i+2)%3];
a-=array[0][i]*array[1][(i+2)%3]*array[2][(i+1)%3];
}
return a;
}
