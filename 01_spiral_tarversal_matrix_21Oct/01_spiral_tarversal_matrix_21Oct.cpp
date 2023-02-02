//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    vector<int> reverseSpiral(int R, int C, vector<vector<int>>&matrix)  {
      
        vector<int> ans;
        int sc=0,ec=C-1,sr=0,er=R-1;
        
        while(sc<=ec && sr<=er)
        {
            for(int i=sc;i<=ec && sr<=er;i++)
            {
                ans.push_back(matrix[sr][i]);
            }
            sr++;
            
            for(int i=sr;i<=er && sc<=ec;i++)
            {
                ans.push_back(matrix[i][ec]);
            }
            ec--;
            for(int i=ec;i>=sc && sr<=er;i--)
            {
                ans.push_back(matrix[er][i]);
            }
            er--;
            for(int i=er;i>=sr && sc<=ec;i--)
            {
                ans.push_back(matrix[i][sc]);
            }
            sc++;
        }
        reverse(ans.begin(),ans.end());
        return ans;

       
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int R, C;
        cin>>R>>C;
        vector<vector<int>> a(R, vector<int>(C, 0));
        for(int i = 0;i < R*C;i++)
            cin>>a[i/C][i%C];
        Solution ob;
        vector<int>ans=ob.reverseSpiral(R,C,a);
        for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
            cout<<endl;
    }
    return 0;
}