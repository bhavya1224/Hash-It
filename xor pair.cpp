#include<bits/stdc++.h>
using namespace std;
int myXOR(int x, int y) 
{ 
   return (x | y) & (~x | ~y); 
} 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        int x;
        cin>>n;
        cin>>x;
        int arr[n];
        int flag=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        unordered_set<int>s;
        for(int i=0;i<n;i++)
        {
            s.insert(arr[i]);
        }
        for(int i=0;i<n;i++)
        {
            if(s.find(myXOR(arr[i],x))!=s.end())
            {
                cout<<"Yes";
                break;
            }
            else
                cout<<"No";
                break;
        }


    }
}