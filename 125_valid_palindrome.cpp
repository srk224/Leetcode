#include<iostream>
#include<cctype>
#include<sstream>
#include<algorithm>
#include<vector>
using namespace std;

bool isPalindrome(string s) {
    stringstream str(s);
    char word;
    string S;
    while(str>>word){
        if(iswalnum(word)){
             S += word;
        }
    }
    transform(S.begin(), S.end(), S.begin(), ::tolower);
//    cout << S << endl;
    int n=S.length();
    for (int i = 0; i < n / 2; i++) {
 
        if (S[i] != S[n - i - 1]) {
            return false;
        }
    }
    return true;
}



int main(){
    cout<<isPalindrome("A man, a plan, a canal: Panama");
}
