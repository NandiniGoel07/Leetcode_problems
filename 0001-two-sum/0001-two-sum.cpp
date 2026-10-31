class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        if (n<2) {
            return {};
        }
        unordered_map<long long, int> s;
        for (int i=0;i<n;i++) {
            long long j= (long long) target - nums[i];
            if (s.find(j)!=s.end()) {
                return {s[j],i};
            }
            s[nums[i]]=i;
        }
        return {};
    }
};