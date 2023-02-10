#include<iostream>
#include<vector>
using namespace std;

bool isAnagram(string s, string t) {
      if(s.length() != t.length())
            return false;
        
        if(s.length() <= 1){
            if(s[0] == t[0])
                return true;
            return false;
        }

        int arr1[26] = {0};
        int arr2[26] = {0};

        for(int i = 0; i < s.length(); ++i){
            arr1[s[i] - 97]++;
            arr2[t[i] - 97]++;
        }

        for(int i = 0; i < 26; ++i){
            if(arr1[i] != arr2[i]){
                return false;
            }
        }

        return true;

    }

int main(){
    isAnagram("car", "rac");
}