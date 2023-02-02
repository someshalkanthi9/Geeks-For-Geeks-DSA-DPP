#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int minLaptops(int N, int start[], int end[]) {
        map<int , int>mp;
        for(int i = 0; i<N;i++){
            mp[start[i]]+=1;
            mp[end[i]]-=1;
            
        }
        int count = 0;
        int ans = 0;
    
        for(auto it : mp){
            count += it.second;
            ans = max(ans,count);
        }        
        return ans;   
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        int start[N], end[N];
        for(int i=0; i<N; i++)
            cin>>start[i];
        for(int i=0; i<N; i++)
            cin>>end[i];
            
        Solution ob;
        cout << ob.minLaptops(N, start, end) << endl;
    }
}