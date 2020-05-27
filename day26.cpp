class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int, int> map;
        int sum = 0;
        int max_subarr = 0;
        for(int i=0; i<nums.size(); i++){
            sum += nums[i] == 1 ? 1 : -1;
            if(sum == 0){
                if(max_subarr < i+1)
                    max_subarr = i+1;
            }else if(map.find(sum) != map.end()){
                if(max_subarr < i - map[sum])
                    max_subarr = i - map[sum];
            }else{
                map[sum] = i;
            }
        }
        return max_subarr;
    }
};