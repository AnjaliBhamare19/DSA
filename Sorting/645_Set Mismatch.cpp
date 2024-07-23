class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
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
        // vector<int> dup;
        // vector<int> miss;
        for(int index =0; index< nums.size(); index++)
        {
            if( nums[index] != index+1)
            {
                // dup.push_back(nums[index]);
                // miss.push_back(index+1);
                return {nums[index],index+1};
            }
        }
        return{-1,-1};
    }
}; //cyclic sort