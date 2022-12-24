#include<iostream>
#include<sstream>
using namespace std;

int lengthOfLastWord(string s) {
//    cout<<s<<endl;
    istringstream str(s);
    string word;
    int count = 0;
    while(str>>word){
        count++;
    }
    int length=word.length();
    return length;
}

int main(){
    cout<<lengthOfLastWord("   fly me   to   the moon  ");
}