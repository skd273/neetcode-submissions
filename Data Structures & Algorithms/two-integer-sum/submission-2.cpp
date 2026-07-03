class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       
        int n=nums.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            int firstEle=nums[i];
            int secondEle=target-nums[i];
            if(mp.find(secondEle)!=mp.end())
            return {mp[secondEle],i};

            mp[nums[i]]=i;
        }
        return {-1,-1};
    }
};
