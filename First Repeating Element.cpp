#include <bits/stdc++.h>
using namespace std;
int repeat(int arr[],int n)
{
    unordered_map <int,int> m;
    for(int i =0;i<n;i++)
    {
        m[arr[i]]++;

    }
    for(int i=0;i<n;i++)
    {
        if(m[arr[i]]>1)
        {
            return(i);
            break;
        }
        else
        {
            return(-1);
        }
        
    }
}
int main() {
    int t;
    cin>>t;
    while(t--)
    {
       int n;
	cin>>n;
	int arr[n];
	for(int i =0;i<n;i++)
	{
	    cin>>arr[i];
	}
	cout<<repeat(arr,n)+1<<endl; 
    }
	
	return 0;
}