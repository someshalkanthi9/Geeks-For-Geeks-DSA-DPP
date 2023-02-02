#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

struct alphanumeric {
    string name;
    int count;
};
class Solution {
  public:
    vector<alphanumeric> sortedStrings(int N, vector<string> A) {
        unordered_map<string,int> mp;
        for(string s : A) {
            mp[s]++;
        }
        vector<alphanumeric> ans;
        for(auto i : mp) {
            ans.push_back({i.first,i.second});
        }
        return ans;
    }
};




int main(){
    



    return 0;
}