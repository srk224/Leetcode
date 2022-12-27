 #include<vector>
 #include <iostream>
 using namespace std;
 #include <set>
 int longestConsecutive(vector<int>& nums) {
        set<int> s(nums.begin(),nums.end());
        int ans = 0, last = *s.begin()-1, len = 0;
        for(auto i:s)
        {
            if (i-last == 1) ans = max(ans,++len);
            else len = 1;
            last = i;
        }
        return ans;
    }

    int main(){

    }