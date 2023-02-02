#include <iostream>
#include <queue>
using namespace std;


 int steppingNumbers(int n, int m)
    {
        // Code Here
        int ans = 0;
        queue<int> q;
        for(int i = 0; i <= 9; i++) q.push(i);
        while(!q.empty())
        {
            int x = q.front();
            q.pop();
            if(x >= n && x <= m) ans++;
            if(x > m || x == 0) continue;
            int y = x%10;
            int a = x*10 + y + 1;
            int b = x*10 + y - 1;
            if(y == 0)
            {
                q.push(a);
            }
            else if(y == 9)
            {
                q.push(b);
            }
            else
            {
                q.push(a);
                q.push(b);
            }
        }
        return ans;
    }



int main(){

    return 0;
}