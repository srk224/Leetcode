#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int removeElement(vector<int>& nums, int val) {
        int count=0;
        for(auto i:nums){
            if(i!=val){
                nums[count]=i;
                count++;
            }
        }
        return count;
    }

int main(){
        vector<int> nums = {0, 1, 2, 2, 3, 0, 4, 2};
        cout << removeElement(nums, 2);
}