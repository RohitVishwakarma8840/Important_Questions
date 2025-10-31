class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {

        // Link : https://leetcode.com/problems/the-two-sneaky-numbers-of-digitville/description/

        int n = nums.size();
        map<int,int>m;

        // if(n==2){
        //     return nums;
        // }

        vector<int>ans;

        for(int i=0; i<n; i++){
            m[nums[i]]++;
        }

        for(auto it = m.begin(); it != m.end(); it++){
            if(it->second>1){
                ans.push_back(it->first);
            }
        }

      return ans;

        
    }
};
