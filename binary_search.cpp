#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool binarySearch(vector<int> &, int);

int main()
{
    int flag = false;
    int target;
    vector<int> nums = {9,1,-2,3,4,7,8,0,10};
    //before sorting
    cout << "original vector: ";
    for(int i=0; i<nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    sort(nums.begin(), nums.end());
    //after sorting
    cout << "\n";
    cout << "After sorting: ";
    for(int i=0; i<nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    cout << "\n";
    cout << "please input a value: ";
    cin >> target;
    flag = binarySearch(nums, target);
    if(flag)
    {
        cout << "the value of target is in the vector" << endl;
    }
    else
    {
        cout << "the vector doesn't have this value" << endl;
    }
    return 0;
}

bool binarySearch(vector<int> &nums, int target)
{
    int middle;
    int left = 0;
    int right = nums.size() - 1;
    while (left <= right)
    {
        middle = (left+right)/2; //int
        if (nums[middle]<target)
        {
            left = middle + 1;
        }
        else if (nums[middle]>target)
        {
            right = middle - 1;
        }
        else if (nums[middle]==target)
        {
            return true;
        }
    }   
    return false;  
}