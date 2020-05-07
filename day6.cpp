class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int sz = nums.size()/2;
        int count = 1;
        int idx = 0;
        for(int i=0; i<nums.size()-1; i++){
            if(nums[i] == nums[i+1]){
                count++;
            }else{
                count = 1;
            }
            if(count > sz){
                count = sz;
                idx = i;
            }
        }
        return nums[idx];
    }
};