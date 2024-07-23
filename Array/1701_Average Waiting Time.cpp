class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        int current_time = 0;
        double total_waiting_time = 0;

        for(int i=0; i<customers.size(); i++){
            current_time = max(customers[i][0],current_time) + customers[i][1];
            total_waiting_time +=  current_time - customers[i][0];
        }

        double awt = total_waiting_time / customers.size();
        return awt;
    }
};