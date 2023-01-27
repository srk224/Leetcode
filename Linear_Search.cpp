#include<iostream>
#include<vector>
using namespace std;

bool linearSearch(vector<int> arr,int k){
    int len = arr.size();
    for(int i = 0; i < len;i++){
        if(arr[i]==k){
            return true;
        }
    }
    return false;
}

int main(){
    vector<int> arr = {1, 2, 3, 4, 5, 5};
    cout<<linearSearch(arr, 7);
}