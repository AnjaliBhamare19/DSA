class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int i=0;
        while(i < nums.size())
        {
            int correct = nums[i] -1;
            if(nums[i] != nums[correct])
            {
                swap(nums[i],nums[correct]);
            }
            else{
                i++;
            }
        }
        for(int index = 0; index<nums.size(); index++)
        {
            if(nums[index] != index+1)
            {
                return nums[index];
            }
        }
       return nums.size();   
    }
};         //cyclic sort