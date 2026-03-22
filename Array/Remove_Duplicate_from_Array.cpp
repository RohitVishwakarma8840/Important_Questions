class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int n = nums.size();

       if(n==0) return 0;
       
        int i=0;
        int j=0;
        int count=0;

        for(int z=0; z<n ; z++){
            if(nums[i]!=nums[j]){
                i++;
                count++;
                nums[i] = nums[j];
            }
            j++;
        }

      
         return count+1;




    }
};
