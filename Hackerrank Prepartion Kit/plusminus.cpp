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
