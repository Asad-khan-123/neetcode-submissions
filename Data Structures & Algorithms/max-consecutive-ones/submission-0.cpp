class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n= nums.size();
        int cons = 0;
        int count = 0;
        for(int i = 0; i < n; i++){
            if(nums[i] == 1){
                count++;
                cons = max(cons, count);
            } else {
                count = 0;
            }
        }

        return cons;
    }
};