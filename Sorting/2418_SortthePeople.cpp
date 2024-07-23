#include <vector>
#include <iostream>
class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        unordered_map<int,string> heightname_map;

         for(int i=0; i<names.size(); i++)
         {
            heightname_map[heights[i]] = names[i];
         }   

         sort(heights.begin(),heights.end(),greater<int>());

         vector<string> sorted_names(names.size());
         
         for(int i=0; i<names.size() ; i++){
          sorted_names[i] =  heightname_map[heights[i]];
         }

         return sorted_names;
    }
};



