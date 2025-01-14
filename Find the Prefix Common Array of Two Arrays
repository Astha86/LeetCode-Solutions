class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n = A.size();
        vector<int> v(n + 1, 0);
        vector<int> ans;
        int x = 0;
        
        for (int i = 0; i < n; i++) {
            if (++v[A[i]] == 2) x++;
            if (++v[B[i]] == 2) x++;
            ans.push_back(x);
        }
        return ans;
    }
};
