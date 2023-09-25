class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max=0;
        int min=INT_MAX;
        int min_index=0;
        for (int i=0;i<prices.size();i++){
            if(prices[i]<=min){
                min_index=i;
                min=prices[i];
                continue;
            }
            if(prices[i]>= max && i> min_index){
                max=prices[i];
            }
        }
        // cout<<min_index<<endl;
        // cout<<max<<" "<<min<<endl;
        if(max==0){
            return 0;
        }
        return max-min;
        
    }
};
