#include<iostream>
#include<algorithm>
using namespace std;    

int dec_binary(int decimal){
    int binary = 0, remainder, product = 1;
  while (decimal != 0) {
    remainder = decimal % 2;
    binary = binary + (remainder * product);
    decimal = decimal / 2;
    product *= 10;
  }
}

 bool isStrictlyPalindromic(int n) {
}

int main(){
  cout << dec_binary(9);
}