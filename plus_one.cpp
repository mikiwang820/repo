#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char *argv[])
{
vector<int> digits = {9,9,9};
int carry = 1;
for (int i = digits.size()-1; i>=0; i--)
{
	digits[i] += carry;
	carry = digits[i]/10;
	digits[i] = digits[i]%10;
}
if (carry) digits.insert(begin(digits), carry);
for (int i1 = 0; i1<digits.size(); i1++)
{
cout << " " << digits[i1];
}
return 0;
}
