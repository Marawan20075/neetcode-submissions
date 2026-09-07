class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int>seen;
       for(int i = 0 ; i < nums.size() ; i++){
         
         seen.insert(nums[i]);
       }

       return seen.size() != nums.size();
    }
};