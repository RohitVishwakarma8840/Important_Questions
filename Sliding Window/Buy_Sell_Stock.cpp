class Solution {
public:
    int maxProfit(vector<int>& prices) {

      // Problem 121 leetcode 

      
        int mini = INT_MAX;
        int result = 0;

        for(int i=0; i<prices.size(); i++){
          mini = min(mini,prices[i]);
          result = max(result,prices[i]-mini);


        }


        return result;

    }
};
