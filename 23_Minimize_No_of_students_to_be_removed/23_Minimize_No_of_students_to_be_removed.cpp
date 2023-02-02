#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int removeStudents(int H[], int N) {
        
        vector<int> std;
        for(int i = 0;i<N;i++){
            int z = H[i];
            
            auto itr = lower_bound(std.begin(),std.end(),z);
            if(itr==std.end()) std.push_back(z);
            else *itr=z;
            
        }
        
        return N-std.size();
        
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        
        int H[N];
        for(int i=0; i<N; i++)
            cin>>H[i];

        Solution ob;
        cout << ob.removeStudents(H,N) << endl;
    }
    return 0;
}