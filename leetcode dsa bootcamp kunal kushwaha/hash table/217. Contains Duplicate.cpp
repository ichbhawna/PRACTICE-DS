class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map <int, int> mp;
        for(int i =0; i<nums.size(); i++){
            mp[nums[i]] ++;
            if(mp[nums[i]] >= 2){
                return true;
            }
        }
        return false;
        return nums.size() > (set<int>(nums.begin(), nums.end()).size());
        
    }
};