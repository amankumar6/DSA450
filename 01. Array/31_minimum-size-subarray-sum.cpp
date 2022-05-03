class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        // [2,3,1,2,4,3]
        // 2 5 6 8 12 15
        int i = 0, j = 0, s = 0, mi =INT_MAX, n = nums.size();
        while(j < n){
            s += nums[j];
            if(s >= target){
                while(s >= target){
                    s -= nums[i];
                    i++;
                }
                mi = min(mi, j - i + 2);
            }
            j++;
            
        }
        return mi == INT_MAX ? 0 : mi;
    }
};