class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int res=0;
        unordered_set<int>st(nums.begin(),nums.end());
        for(int num:nums)
        {
            if(st.find(num-1)==st.end())
            {
                int lcs=1;
                while(st.find(num+lcs)!=st.end())
                lcs++;

                 res=max(res,lcs);
            }
           
        }
        return res;
    }
};
