#include <iostream>
#include <vector>
using namespace std;
char findsmallestletter(vector <char>& letters, char target){
      int start = 0;
      int end = letters.size() -1;
      while(start <= end)
      {
        int mid = start + (end - start)/2;
        if(target < letters[mid])
        {
            end = mid - 1;
        }
        else{
            start = mid+1;
        }
      }
      return letters[start % letters.size()];
}
int main()
{
    vector <char> letters = {'c','f','j'};
    char target = 'j';
    char output = findsmallestletter(letters,target);
    cout<<output;
    return 0;
}