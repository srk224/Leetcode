#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos;
        vector<int> neg;
        vector<int> final;
        for(auto i: nums){
            if(i<0){
                neg.push_back(i);
            }
            else{
                pos.push_back(i);
            }
        }  
        int len=pos.size();
        int i = 0;
        while(i!=len){
            final.push_back(pos[i]);
            final.push_back(neg[i]);
            i++;
        }
        for(auto k:final){
            cout << k << " ";
        }
        return final;
}

int main(){
        vector<int> arr = {3,1,-2,-5,2,-4};
        rearrangeArray(arr);
}