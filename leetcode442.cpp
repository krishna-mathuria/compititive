class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> vec;
        for(int i=0;i<nums.size();i++){
            if(nums[abs(nums[i])-1]<0){
               vec.push_back(abs(nums[i]));
            }  
            nums[abs(nums[i])-1] = -nums[abs(nums[i])-1]; 
        }
        return vec;
    }
};