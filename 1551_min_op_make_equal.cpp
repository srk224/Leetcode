#include<iostream>
#include<vector>
using namespace std;

int minOperations(int n) {
        vector<int> arr;
        for(int i=0;i<n;i++){
            arr.push_back((2*i) +1);
        }   
        int sum=0;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
        }
        int average=sum/n;
        int x = 0;
        int y = n - 1;
        int mid = n / 2;
        int count = 0;
        while(x<mid){
            count+= average - arr[x];
            cout << count << endl;
            x++;
            y--;
        }
        return count;
}

int main(){
        minOperations(3);
}