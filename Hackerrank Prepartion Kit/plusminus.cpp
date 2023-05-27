#PlusMinus

/*Given an array of integers, calculate the ratios of its elements that are positive, negative, and zero. 
Print the decimal value of each fraction on a new line with  places after the decimal.

The code takes an input array of integers and calculates the ratios of positive, negative, and zero elements. 
It uses three variables to count the occurrences, and a loop to iterate over the array. 
The ratios are calculated by dividing the counts by the array size. The results are printed with a precision of 6 decimal places.*/


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    double positive=0,negative=0,zero=0;
    
    vector<int> arr(n);
    
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
        
        if(arr[i]>0)
            positive++;
        else if(arr[i]<0)
            negative++;
        else 
            zero++;
    }
    
    cout<<setprecision(6)<< positive / n <<endl;
    cout<<setprecision(6)<< negative / n <<endl;
    cout<<setprecision(6)<< zero / n <<endl;    
    
    return 0;
}
