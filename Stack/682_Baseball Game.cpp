class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> S;
        
        for(string& X : operations)
        {
            if(X == "+")
            {
                int top = S.top();
                S.pop();
                int newtop = top + S.top();
                S.push(top);
                S.push(newtop);
            }
            else if(X == "C")
            {
                S.pop();
            }
            else if(X == "D")
            {
                S.push(2 * S.top());
            }
            else{
                S.push(stoi(X));
            }
        }

       int ans = 0;
        while (!S.empty()) {
            ans += S.top();
            S.pop();
        }
        return ans; 
    }
};