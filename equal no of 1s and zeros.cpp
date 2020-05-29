// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

long long int countSubarrWithEqualZeroAndOne(int arr[], int n);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n,i;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
	cin>>arr[i];
	cout<< countSubarrWithEqualZeroAndOne(arr, n)<<"\n";
	}
	return 0;
}
// } Driver Code Ends




// arr[] : the input array
// N : size of the input array

// return the number of subarrays with equal 0s and 1s
long long int countSubarrWithEqualZeroAndOne(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            arr[i]=-1;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    int count=0;
    int presum=0;
    unordered_map<int,int>m;
    for(int i=0;i<n;i++)
    {
        presum+=arr[i];
        if(m.find(presum)!=m.end())
        {
            count+=m[presum];
        }
        if(presum==0)
        {
            count++;
        }
        m[presum]++;
    }
    return(count);
}