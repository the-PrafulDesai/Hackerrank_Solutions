/*Given five positive integers, find the minimum and maximum values that can be calculated by summing exactly four of the five integers. 
Then print the respective minimum and maximum values as a single line of two space-separated long integers.
The code takes five positive integers as input. It calculates the minimum and maximum values that can be obtained by summing exactly four of the five integers.
The code iterates over the input numbers, keeping track of the maximum and minimum values encountered.
Finally, it prints the respective minimum and maximum values as a single line of two space-separated long integers.
*/



#include <bits/stdc++.h>
#include <climits>
using namespace std;

int main()
{
    long long int n=5, maxno=INT_MIN, minno=INT_MAX, sum=0, arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }

    for(int i=0; i<n; i++)
    {
        maxno=max(maxno,arr[i]);
        minno=min(minno,arr[i]);
    }
    
    cout<<sum-maxno<<" "<<sum-minno;
    return 0;
}
