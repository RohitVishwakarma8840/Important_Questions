class Solution {
public:
    bool checkIfPangram(string sentence) {

        int s = sentence.size();

        unordered_map<char,int>mp;
        
        for(char ch='a'; ch<='z';ch++)
         mp[ch] =0;


      for(int i=0;i<s;i++){
        mp[sentence[i]] = 1;
      }

      for(char ch='a'; ch<='z';ch++)
         if(mp[ch] ==0)
         return false;


         return true;

        
    }
};
