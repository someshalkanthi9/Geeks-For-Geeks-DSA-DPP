#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<int> asteroidCollision(int n, vector<int> &arr) {
        stack<int> st;
        for(int i=0;i<n;i++)
        {

            if(st.empty())
            {
                st.push(arr[i]);
                continue;
            }
            while(!st.empty() and st.top()>=0 and arr[i]<0 and st.top()<abs(arr[i]))
            {
                    st.pop();
            }
            if(!st.empty() and st.top()>=0 and arr[i]<0 and st.top()==abs(arr[i]))
            {
                    st.pop();
                    continue;
            }
            if(st.empty() or  (st.top()<0 and arr[i]>=0  or st.top()<0 and arr[i]<0 or st.top()>=0 and arr[i]>=0))
            {
                st.push(arr[i]);
            }
        }
        vector<int> ans;
        while(!st.empty())
        {
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};


int main(){
    
    return 0;
}