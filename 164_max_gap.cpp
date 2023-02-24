class Solution {
public:
    int maximumGap(vector<int>& nums) {
        if(nums.size()<2){
            return 0;
        }
        sort(nums.begin(),nums.end());
        vector<int> diff;
        for(int i=0;i<nums.size()-1;i++){
            diff.push_back(abs(nums[i]-nums[i+1]));
        }
        int ans=0;
        for(int i=0;i<diff.size();i++){
            if(diff[i]>ans){
                ans=diff[i];
            }
        }
        return ans;
    }
};