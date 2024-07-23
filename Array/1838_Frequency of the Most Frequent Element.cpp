class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
       long left =0, right=0,ans=0;
       sort(nums.begin(),nums.end());
       long sum = nums[0];
       while(right < nums.size())
       {
         if(nums[right] * (right-left+1) <= k+ sum)
         {
            ans = max(right-left+1,ans);
             right++;
            if(right <  nums.size())
            {
                sum += nums[right];    
            }
         }
         else{
            sum -= nums[left];   
            left++;  
         }
       }
       return ans;
    }
};