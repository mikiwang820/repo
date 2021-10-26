#include <iostream>
#include <vector>
using namespace std;

int main()
{
vector<int> nums = {1, 2, 3};
//vector<int> nums = {1 ,7 ,3 ,6 ,5 , 6};
//vector<int> nums = {2, 1, -1};
//vector<int> nums = {-1,-1,0,1,1,0};
int sum = 0;
for (int i = 0; i < nums.size(); ++i)
{
	sum+=nums[i];
}
cout << "the sum of the vector is: " << sum << endl;
for (int i1 = 0; i1 < nums.size(); i1++)
{
int pre = 0;
for (int i2 = 0; i2 < i1; i2++)
{
	pre += nums[i2];
}
int cal = pre*2+nums[i1];
if (cal==sum)
{
	cout << "pivot index is: " << i1 <<endl;
	break;
}
else if ((i1==nums.size()-1) && (cal != sum))
{
	cout << "-1" <<endl;
}
}
return 0;
}
