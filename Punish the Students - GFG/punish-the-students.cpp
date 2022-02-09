// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution{
    public:
    int shouldPunish (int roll[], int marks[], int n, double avg)
    {
        int swaps=0;
        int i,j;
        int currAvg=0;
        double sum;
        for(i=0;i<n-1;i++)
        {
           for(j=0;j<n-i-1;j++)
           {
               if(roll[j]>roll[j+1])
               {
                   swap(roll[j+1],roll[j]);
                   marks[j+1]--;
                   marks[j]--;
                   swap(marks[j+1],marks[j]);
               }
           }
        }
        for(i=0;i<n;i++)
            currAvg+=marks[i];
        i=0;
        sum=currAvg/n;
        return (sum<avg)?i:i+1;
        // your code here
    }

};

// { Driver Code Starts.
int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		double avg; cin >> avg;

		int roll[n];
		int marks[n];

		for (int i = 0; i < n; ++i)
			cin >> roll[i];
		for (int i = 0; i < n; ++i)
			cin >> marks[i];
        Solution ob;
		cout << ob.shouldPunish (roll, marks, n, avg) << endl;
	}
}
  // } Driver Code Ends