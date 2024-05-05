#include<iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

void Backtrack(vector<int>& candidates,vector<vector<int>>&res,vector<int>&ans,int target,int sum,int idx){
        for(int i=idx;i<candidates.size();i++){
            int x=candidates[i];
            sum+=x;
            ans.push_back(x);
            if(sum==target) res.push_back(ans);
            else if(sum<target){
                Backtrack(candidates,res,ans,target,sum,i);
            }
            sum-=x;
            ans.pop_back();
        }
    }
vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>res;
        vector<int>ans;
        Backtrack(candidates,res,ans,target,0,0);
        return res;
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