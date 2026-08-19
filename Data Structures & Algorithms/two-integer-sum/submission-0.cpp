class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int, int> ans;
        for(int i=0; i<n; i++){
            int more = target - nums[i];
            if(ans.find(more) != ans.end()){
                return {ans[more], i};
            }
            ans[nums[i]] = i;
        }
    }
};
