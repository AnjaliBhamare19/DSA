class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l = 0, h= numbers.size()-1;
        // while(numbers[l] + numbers[h] !=target)
        // {
        //     if(numbers[l] + numbers[h] < target)
        //     {
        //        l++;
        //     }
        //     else { h--; }
        // }
        // return {l+1,h+1};
        while(l<h)
        {
            int s = numbers[l] + numbers[h];
            if(s<target)
              l++;
            else if(s>target)
              h--;
            else
            return vector<int>{l+1, h+1};   
        }
        return vector<int>{-1,-1};   
    }
};