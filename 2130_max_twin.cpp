#include<iostream>
#include<vector>
using namespace std;

struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
  
 int pairSum(ListNode* head) {
        vector<int> nums;
        ListNode *temp=head;
        while(temp!=nullptr){
            nums.push_back(temp->val);
            temp=temp->next;
        }
        int end=nums.size()-1;
        int sum=0;
        int maxSum=0;
        int st=0;
        while(st<end){
            sum=nums[st]+nums[end];
            if(sum>maxSum){
                maxSum=sum;
            }
            st++;
            end--;
        }
        return maxSum;
    }
int main(){
    
}