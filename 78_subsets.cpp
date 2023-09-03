#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> subsets(vector<int>& nums) {
    vector<vector<int>> ans;
    vector<int> empty_arr = {};
    ans.push_back(empty_arr);
    for (int i = 0; i < nums.size();i++){
        vector<int> push_arr;
        push_arr.push_back(nums[i]); 
        ans.push_back(push_arr);
    }
    for(auto i:nums){
        cout << i << endl;
    }
}

int main(){
    vector<int> arr={1,2,3,4};
    subsets(arr);
}