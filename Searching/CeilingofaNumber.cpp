//Ceiling  = smallest element in array greator or  = target

#include <iostream>
using namespace std;

int ceilingnumber(int arr[], int n, int target){
   int start = 0;
   int end = n-1;
   while(start <= end)
   {
    int mid = start + (end-start)/2;
    if(target > arr[mid] )
    {
        start = mid+1;

    }
    else if(target < arr[mid])
    {
        end = mid-1;
    }
    else{
        return arr[mid];
    }
   }
   return arr[start];
}

int main()
{
    int arr[] = {2,3,5,9,14,16,18};
    int n =  sizeof(arr);
    int target = 15;
    int output = ceilingnumber(arr,n,target);
    cout<<output;
    return 0;
}