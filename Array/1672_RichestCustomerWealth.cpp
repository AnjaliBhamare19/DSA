class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {

        int maxwealth=0;
        for(int c=0; c<accounts.size(); c++){
            int wealth = 0;
             for(int b=0; b < accounts[c].size(); b++)
             {
                wealth += accounts[c][b];
             }

             if(wealth > maxwealth){
                maxwealth = wealth;
             }
        }
       return maxwealth; 
    }
};