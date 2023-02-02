#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string longestString(vector<string> &words)
    {
       int n = words.size();
       set<string> s;
       string ans;
       
       for(auto i: words) s.insert(i);
       
       sort(words.begin(),words.end());
       
       for(auto i: words){
           string str = i;
           string temp;
           bool flag =true;
           
           for(int j = 0;j<str.size();j++){
               temp +=str[j];
               if(!s.count(temp)){
                   flag= false;
                   break;
               }
           }
           
           if(flag and str.size() > ans.size())
                ans=str;
           
       }
       
       return ans;

    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<string> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        Solution obj;
        string w = obj.longestString(v);
        cout << w << "\n";
    }
    return 0;
}