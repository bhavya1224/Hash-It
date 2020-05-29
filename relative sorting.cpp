#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        int c;
        cin>>n;
        cin>>c;
        int arr[n];
        int rel[c];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<c;i++)
        {
            cin>>rel[i];
        }
        unordered_map<int,int>m1;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            m1[arr[i]]++;
        }
        for(int i=0;i<c;i++)
        {
            if(m1.find(rel[i])!=m1.end())
            {
                for(int j=0;j<m1[rel[i]];j++)
                {
                    v.push_back(rel[i]);

                }
                m1.erase(rel[i]);
            }
        }
        vector<int>v2;
        for(auto x:m1)
        {
           
            {
                v2.push_back(x.first);
            }
        }
        sort(v2.begin(),v2.end());
        v.insert(v.end(), v2.begin(), v2.end());
        for(auto x:v)
        {
            cout<<x;
        }
        cout<<endl;



    }
}