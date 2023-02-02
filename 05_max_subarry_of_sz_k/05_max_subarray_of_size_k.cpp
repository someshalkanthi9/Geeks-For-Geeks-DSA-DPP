#include <iostream>
#include <bits/stdc++.h>
using namespace std;


class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        
       vector<int>v;
        int mx=*max_element(arr,arr+k);
        v.push_back(mx);
        for(int i=1;i<=n-k;i++)
        {
            if(arr[i+k-1]>=mx)
            {
                v.push_back(arr[i+k-1]);
                mx=arr[i+k-1];
            }
            else
            {
                if(arr[i-1]<mx)v.push_back(mx);
                else
                {
                    int m=*max_element(arr+i,arr+i+k);
                    v.push_back(m);
                    mx=m;
                }
            }
        }
        return v;
    }
};




int main(){
    



    return 0;
}