class Solution {
public:

bool subsetSum(vector<int>&nums,int n,int target,int index,vector<vector<int>>& dp){

    // base condition 
    if(target==0) return true;
    if(index>=n) return false;

     if(dp[index][target] != -1)
            return dp[index][target];

    // logic 
     bool include = false;

     if(nums[index]<=target){
        include = subsetSum(nums,n,target-nums[index], index+1,dp);
     }
     
     bool exclude = subsetSum(nums,n,target,index+1,dp);

     return dp[index][target] = (include || exclude);

}



    bool canPartition(vector<int>& nums) {
        
        int n = nums.size(); 
        int sum = 0; 
        for(int i=0; i<n ; i++){
            sum += nums[i];
        }

        if(sum%2!=0) return false;
        int target = sum/2;

    vector<vector<int>> dp(n, vector<int>(target + 1, -1));


     return subsetSum(nums,n,target,0,dp);





    }
};
