#include <bits/stdc++.h>
using namespace std;


class Solution{
public:
    void precompute()
    {
 
    }
    
    long long solve(long long l, long long r){
        long long ans=0;
        for(long long i=1;i<=r;i*=2){
            for(long long j=i*2;j<=r;j*=2){
                for(long long k=j*2;k<=r;k*=2){
                    long t=i|j|k;
                    if(t>=l && t<=r) ans++;
                }
            }
        }
        return ans;
    }
    
};
int main()
{
    int t;
    Solution ob;
    ob.precompute();
    cin>>t;
    while(t--)
    {
        long long l,r;
        cin>>l>>r;
        cout << ob.solve(l, r) << endl; 
    }
    return 0;
}