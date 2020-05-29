#include<bits/stdc++.h>
using namespace std;

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
        {
            cin>>arr[i];
        }
        vector<int>v;
        unordered_map<int,int>m;
        for(int i=0;i<n;i++)
        {
            m[arr[i]]++;
        }
        
        for(auto x:m)
        {
            v.push_back(x.second);
        }
        sort(v.begin(),v.end());
        for(auto x:v)
        {
            cout<<x<<" ";

        }
        cout<<endl;

    }
}