class Solution {
public:

    int helper(vector<int>& v, int n, int c, int p, vector<vector<int>>& dp){
        if(c==n) return 0;
        if(dp[c][p+1] != -1) return dp[c][p+1];

        int in = 0;
        if(p==-1 || v[c]>v[p]) in = 1+helper(v, n, c+1, c, dp);

        int ex = 0;
        ex = helper(v, n, c+1, p, dp);

        return dp[c][p+1] = max(in,ex);
    }

    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> dp(n, vector<int>(n+1,-1)); // memoization
        return helper(nums, n, 0 ,-1, dp);
    }
};
