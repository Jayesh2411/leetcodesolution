// { Driver Code Starts
#include<bits/stdc++.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

 // } Driver Code Ends
/* You are required to complete the function below
*  arr[]: input array
*  n: size of array
*/
#include<math.h>
class Solution{
  public:
    //Function to find triplets with zero sum.
    bool findTriplets(int arr[], int n)
    { 
        unordered_set<int> tab;
        tab.insert(arr[0]);
        for(int i=1;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(tab.find((arr[i]+arr[j])*-1)!=tab.end())
                    return 1;
            }
            tab.insert(arr[i]);
        }
        return 0;
        //Your code here
    }
};

// { Driver Code Starts.
int main()
{
    int t;
	cin>>t;
	while(t--){
    	int n;
    	cin>>n;
    	int arr[n]={0};
    	for(int i=0;i<n;i++)
    		cin>>arr[i];
    	Solution obj;
        if(obj.findTriplets(arr, n))
            cout<<"1"<<endl;
        else 
            cout<<"0"<<endl;
	}
    return 0;
}  // } Driver Code Ends