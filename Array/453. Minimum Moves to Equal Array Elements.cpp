class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());

        vector<int> v(n);
        int ans = 0;
        for(int i=0; i<n; i++){
            v[i] = nums[i]-nums[0];
            ans += v[i];
        }

        return ans;
    }
};
