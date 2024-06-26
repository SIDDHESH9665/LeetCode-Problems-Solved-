#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1,3,4,5,2,9,2,2};
    int sum = 0, leftSum = 0;
    int n = 8;

    for (int i = 0; i < n; i++)
    {
        sum = sum += arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        sum = sum - arr[i];
        if (sum == leftSum)
        {
            cout<<"EP "<<i;
        }
        else
        {
            leftSum = leftSum + arr[i];
        }
    }

    return 0;
}
