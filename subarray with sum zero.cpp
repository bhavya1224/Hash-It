// { Driver Code Starts
// A C++ program to find if there is a zero sum
// subarray
#include <bits/stdc++.h>
using namespace std;


bool subArrayExists(int arr[], int n);
// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    	if (subArrayExists(arr, n))
		cout << "Yes\n";
	else
		cout << "No\n";
	}
	return 0;
}// } Driver Code Ends


//Complete this function
bool subArrayExists(int arr[], int n)
{
    unordered_set<int>s;
    int presum=0;
    for(int i=0;i<n;i++)
    {
        presum+=arr[i];
        if(s.find(presum)!=s.end())
        {
            return true;
        }
        if(presum==0)
            return true;
        s.insert(presum);
        
    }
    return false;
}


