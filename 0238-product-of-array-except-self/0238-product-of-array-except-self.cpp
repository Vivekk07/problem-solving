class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        long long a = 1;
        vector <int> ans;
        int zeroCount = 0;
        
        for(auto i : nums){
            if(i != 0) a *= i;
            else zeroCount++;
        }
        
           
        for(int i = 0; i < nums.size(); i++){
            if(zeroCount > 1) ans.push_back(0);
            else if(zeroCount == 1){
                if(nums[i] != 0) ans.push_back(0);
                else ans.push_back(a);
            }
            else
                ans.push_back(a/nums[i]);
        }
        return ans;
    }
};