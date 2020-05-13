class Solution {
public:
        
    int singleNonDuplicate(vector<int>& nums) {
        int l = 0, r = nums.size()-1;
        while(l < r){
            int mid = l + (r-l)/2;
            if(mid == 0 && nums[mid] != nums[mid+1]) return nums[mid];
            else if(mid == nums.size()-1 && nums[mid] != nums[mid-1]) return nums[mid];
            else if(nums[mid] != nums[mid+1] && nums[mid] != nums[mid-1]) return nums[mid];
            
            if(mid%2 == 0){                
                if(mid-1 >= 0 && mid+1<nums.size() && nums[mid] != nums[mid+1] && nums[mid] == nums[mid-1]){
                    r = mid - 1;
                }else{
                    l = mid + 1;
                }
            }else{
                if(nums[mid] != nums[mid-1] && nums[mid] == nums[mid+1]){
                    r = mid - 1;
                }else{
                    l = mid + 1;
                }
            }
        }
        return nums[l];
        
    }
};