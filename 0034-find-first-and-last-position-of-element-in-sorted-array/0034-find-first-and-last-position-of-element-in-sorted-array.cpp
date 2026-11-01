class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
       int n=nums.size();
       int l=0;
       int h=nums.size()-1;
       int a=-1;
       int b=-1;
       while(l<=h){
        int m=(l+h)/2;
        if(nums[m]>=target){
            if(target==nums[m])
                a=m;
            h=m-1;
        }
        else
            l=m+1;
       } 
       l=0;
       h=nums.size()-1;
       while(l<=h){
        int m=(l+h)/2;
        if(nums[m]<=target){
            if(target==nums[m])
                b=m;
            l=m+1;
        }
        else
            h=m-1;
       }
       return {a,b};
    }
};