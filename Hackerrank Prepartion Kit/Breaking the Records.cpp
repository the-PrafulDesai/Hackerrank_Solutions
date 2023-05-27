#Breaking the Records

// Intuition:
// The code aims to find the number of times the maximum and minimum values change while reading the elements into the score vector.

// Approach:
// Read the value of n, which represents the number of elements in the score vector.
// Create a vector score of size n.
// Read n integers into the score vector.
// Initialize max and min variables with the first element of score.
// Initialize cnta and cntb variables to zero, which will count the number of times the maximum and minimum values change, respectively.
// Iterate from the second element to the last element of the score vector.
// Inside the loop, check if the current element is greater than the current maximum value (max):
// If it is, increment cnta and update max with the current element.
// Inside the loop, check if the current element is smaller than the current minimum value (min):
// If it is, increment cntb and update min with the current element.
// Print the values of cnta and cntb.

// Complexity:
// The time complexity of this code is O(n) because it iterates over the elements of the score vector once.
// The space complexity is O(n) since the code uses a vector of size n to store the input elements.


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>score(n);
    
    for(int score_i = 0; score_i < n; score_i++)
    {
        cin>>score[score_i];
    }
    
    int max = score[0];
    int min = score[0];
    
    int cnta = 0;
    int cntb = 0;
    
    for(int i = 1; i < n; ++i)
    {
        if(score[i] > max)
        {
            ++cnta;
            max = score[i];
        }
        
        if(score[i] < min)
        {
            ++cntb;
            min = score[i];
        }
    }
    
    cout<<cnta<<" "<<cntb;
    return 0;
}

