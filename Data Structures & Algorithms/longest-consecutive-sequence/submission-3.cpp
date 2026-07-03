class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int res=0;
        unordered_set<int>st(nums.begin(),nums.end());
        for(int num:nums)
        {
            int lcs=0,curr=num;
            while(st.find(curr)!=st.end())
            {
                lcs++;
                curr++;
            }
            res=max(res,lcs);
        }
        return res;
    }
};
