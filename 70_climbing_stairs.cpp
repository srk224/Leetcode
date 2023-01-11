#include<iostream>
using namespace std;

int climbStairs(int n) {
      if(n%2==0){
          return n/2 + 1;
      }
      else {
          return n;
      }
    }

int main(){
      climbStairs(5);
}