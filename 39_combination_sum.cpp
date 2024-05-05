#include<iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        for (int i=0;i<candidates.size();i++){
            
        }
        return ans;
    }
int main(){
    vector<int> v={2,3,6,7};
    int target=7;
    vector<vector<int>> ans=combinationSum(v,target);
    for (int i=0;i<ans.size();i++){
        for (int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;}
    return 0;
}