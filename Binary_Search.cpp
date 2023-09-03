#include<iostream>
#include<vector>
using namespace std;

bool binarySearch(vector<int> arr,int n,int k){
    int st = 0;
    int end = arr.size() - 1; // end=n-1;
    while(st<=end){
         int mid = (st + end) / 2;
        if(arr[mid]==k){
            return true;
        }
        if(arr[mid]>k){
            end = mid - 1;
        }
        else{
            st = mid + 1;
        }
    }
    return false;
}

int main(){
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    cout << binarySearch(arr, 6, 0);
}

// #Easily done