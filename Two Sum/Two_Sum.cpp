class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i,j;
        int n = nums.size();
        
        map<int , int> mp;
        
        for(i=0;i<n;i++)
        {
            int a = nums[i];
            int diff = target - a;
            
            if(mp.find(diff) != mp.end()) return {i,mp[diff]};
            mp[a] = i; 
        }
        return {-1,-1};
    }
};