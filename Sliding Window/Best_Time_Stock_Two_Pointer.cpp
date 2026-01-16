class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
       int left = 0; 
       int right = 1;

       int n = prices.size();
       int maxProfit = 0;

       while(right< n){

        if(prices[left]<prices[right]){
           int  profit = prices[right]-prices[left];
            maxProfit = max(maxProfit,profit);
            right++;
        }
        else{
            left = right;
            right++;
        }


       }


       return maxProfit;

    }
};
