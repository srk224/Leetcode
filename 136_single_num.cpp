#include <iostream>
#include<vector>

 int singleNumber(vector<int>& nums) {
      bool flag;
        int i, j;
        int ans = 0;
        for (i = 0; i < nums.size(); i++) {
            flag = false;
            for (j = 0; j < nums.size(); j++) {
                if (nums[i] == nums[j] && i != j) {
                    flag = true;
                    break;
                }
            }
            if (flag == false) {
                ans = nums[i];
                break;
            }
        }
        return ans;      
    }

    