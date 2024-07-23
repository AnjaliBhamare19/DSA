class Solution {
public:
    int jump(vector<int>& nums) {
        int jumps=0, maxe=0, last=0;
        for(int i=0; i<nums.size() -1; i++)
        {
            maxe = max(maxe, i+nums[i]);
            if(last == i)
            {
                jumps++;
                last = maxe;
            }
        }
        return jumps;
    }
};