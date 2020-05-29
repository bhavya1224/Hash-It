#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int m;
	    cin>>m;
	    int arr1[n];
	    int arr2[m];
	    int count=0;
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr1[i];
	    }
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr2[i];
	    }
	    unordered_set<int>s;
	    for(int i=0;i<n;i++)
	    {
	        s.insert(arr1[i]);
	    }
	    for(int i=0;i<m;i++)
	    {
	        if(s.find(arr2[i])!=s.end())
	        {
	            count++;
	        }
	    }
	    
	    cout<<count<<endl;
	    
	}
	return 0;
}