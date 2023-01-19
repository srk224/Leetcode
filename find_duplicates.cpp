#include<vector>
#include<set>
#include<iostream>
#include<map>
using namespace std;
int findDuplicate(vector<int> &arr) 
{
	int sum=0;
    for(int i=0;i<arr.size();i++){
        sum+=arr[i];
    }
    std::set<int> set ;
    for(int i=0;i<arr.size();i++){
        set.insert(arr[i]);
    }
    int sum1=0;
    for (auto& i : set) {
        sum1+=i;
    }
    int ans=sum-sum1;
    return ans;
}

int main(){
    vector<int> arr = {1, 2, 3, 4,5, 6, 5};
    cout << findDuplicate(arr);
}