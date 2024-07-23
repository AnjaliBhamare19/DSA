class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int i=0;
        while(i < nums.size())
        {
            int correct = nums[i];
            if(nums[i] < nums.size() && nums[i] != nums[correct])
            {
                swap(nums[correct],nums[i]);
            }
            else{
                i++;
            }
        }

        for(int index = 0; index < nums.size(); index++)
        {
            if(nums[index] != index){
                return index;
            }
        }
        return  nums.size();
    }
};