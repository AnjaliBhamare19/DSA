class Solution {
public:
    int minOperations(vector<string>& logs) {
        stack<string> S;

        for(string& current_string : logs){
            if(current_string == "../")
            {
                if(!S.empty())
                S.pop();
            }
            else if(current_string == "./")
            {
               continue;
            }
            else{
                S.push(current_string);
            }

        }
         return S.size();
    }
   
};