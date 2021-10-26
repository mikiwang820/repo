#include <iostream>
#include <vector>
using namespace std;

int main()
{
vector<int> nums = {1, 2, 3, 4};
vector<int> sorted_nums = nums;
int temp = nums[0];
int index = 0;
if (nums.size() > 1)
{
int second_largest;
sort(sorted_nums.begin(), sorted_nums.end());
second_largest = sorted_nums.at(sorted_nums.size()-2);
for (int i=0; i<nums.size(); i++)
{
if (nums[i] > temp)
{
	temp = nums[i];
	index = i;	
} 
}
if (nums[index]<(second_largest*2))
{
	cout << "-1" << endl;
}
else
{
	cout << "the index of the largest number is: " << index << endl;
}
}
else
{
return 0;
}
}
