class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int a = 1;
        vector <int> ans(nums.size(), 1);
        
        int pre = 1;
        for(int i = 0; i < nums.size(); i++){
            ans[i] = pre;
            pre *= nums[i];
        }
        
        int post = 1;
        for(int i = nums.size()-1; i >= 0; i--){
            ans[i] *= post;
            post *= nums[i];
        }
        
        return ans;
    }
};