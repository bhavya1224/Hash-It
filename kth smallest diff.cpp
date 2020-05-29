#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        int k;
        cin>>n>>k;
        int arr[n];
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                v.push_back(abs(arr[i]-arr[j]));
            }
        }
        sort(v.begin(),v.end());
        for(auto x:v)
        {
            cout<<x;
        }
        cout<<v[k]<<endl;


    }
}