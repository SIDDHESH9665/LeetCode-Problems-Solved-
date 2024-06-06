#include<iostream>
using namespace std;

class Solution{
    public:
    int SubtractProductAndSum(int n)
    {
        int product = 1;
        int sum = 0;
        while(n!=0)
        {
            int digit = n%10;
            product = product * digit;
            sum = sum + digit;

            n = n/10;

        }
        return product - sum;

    }
};


int main()
{
  Solution obj;
  int number;
  cout<<"Enter the number:";
  cin>>number;
  cout<<"Result:"<<obj.SubtractProductAndSum(number)<<endl;

    return 0;
}