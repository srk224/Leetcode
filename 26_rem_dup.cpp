#include<iostream>
#include<vector>
#include<set>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    //Make a set and push alll the unique values into
    // Return the length of the set or array of unique
    set<int> s; 
        for(int i =0; i<nums.size(); i++)
        {
            s.insert(nums[i]);
        }
        
        int ans = s.size();
        nums.clear();
        for(auto i:s)
        {
           nums.push_back(i);
        }
        return ans;
    }
}

int main(){

}