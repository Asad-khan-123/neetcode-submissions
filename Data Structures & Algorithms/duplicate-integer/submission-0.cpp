class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> ans;

        for(int i=0; i<n; i++){
            if(ans[nums[i]]==1){
                return true;
            }
            ans[nums[i]]++;
        }

        return false;
    }
};