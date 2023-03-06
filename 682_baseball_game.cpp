#include<iostream>
#include<vector>
using namespace std;

int calPoints(vector<string>& operations) {
        vector<int> res;
        for(int i=0; i< operations.size();i++){
            int x;
            if(operations[i]=="+"){
                x=res[res.size()-1]+res[res.size()-2];
                res.push_back(x);
            }else if(operations[i]=="D"){
                x=res[res.size()-1]*2;
                res.push_back(x);
            }else if(operations[i]=="C"){
                res.pop_back();
            }else{
                res.push_back(stoi(operations[i]));
            }
        }
        int c=0;
        for(auto a: res){
            c=c+a;
        }
        return c;
}

