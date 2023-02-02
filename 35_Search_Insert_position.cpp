#include<iostream>
#include<vector>
using namespace std;

int searchInsert(vector<int>& nums, int target) {
        int s=0;
        int e= nums.size()-1;
        while(s<=e){
            int mid= s + (e-s)/2;
            if(s == e){
                if(nums[e] < target){
                    return e + 1; 
                }else{
                    return e;
                }
            }

            if(nums[mid]==target){
                return mid;
            } else if(nums[mid]<target){
                s=mid+1;
            } else{
                e=mid-1;
            }
        }
        return s;
    }

int main(){

}