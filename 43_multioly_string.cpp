#include<iostream>
#include<sstream>
using namespace std;

 string multiply(string num1, string num2) {
        stringstream ss1;
        stringstream ss2;
        long long n1,n2;
        ss1<<num1;
        ss2<<num2;
        ss1>>n1;
        ss2>>n2;
        long long ans=n1*n2;
        stringstream ass;
        ass<<ans;
        string ansss;
        ass>>ansss;
        return ansss;
 }

