vector<int>ans(46,0);
class Solution {
public:
    int climbStairs(int n) {
        ans[1]=1;ans[2]=2;
        for(int i=3;i<ans.size();i++)
        {
            ans[i]=ans[i-1]+ans[i-2];
        }
        return ans[n];
    }
};