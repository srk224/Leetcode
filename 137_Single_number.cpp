#include<iostream>
#include<vector>
using namespace std;

int singleNumber(vector<int>& nums) {
    bool flag = false;
    int len=nums.size();
    int ans = 0;
    for(int i=0; i<len; i++) {
        for(int j=0; j<len; j++) {
            for(int k=0; k<len; k++) {
                if(nums[i]==nums[j] == nums[k] && (i!=j !=k)){
                    flag = true;
                    break;
                }
            }
        }
        if(flag==false){
            ans = nums[i];
            break;
        }
    }
    return ans;
}

 int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums.size()% 3 != 0){
            while(nums.size() %3 != 0) nums.push_back(0);
        }
      for(int i=0;i<nums.size()-2;i=i+3)
          if(nums[i] != nums[i+2]) return nums[i];
        return 0;
    }

int main(){
    vector<int> arr = {0,1,0,1,0,1,99};
    cout<<singleNumber(arr);
}