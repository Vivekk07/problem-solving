class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map <int, int> a;
        for (auto i : nums){
            a[i]++;
        }
        for (auto i : nums){
            if(a[i] > 1) return true;
        }
        return false;
    }
};